<template>
  <section class="panel-41225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41225");
const base = ref(41225);
const total = computed(() => base.value * 2);

function incrementar41225() {
  base.value++;
}
</script>
