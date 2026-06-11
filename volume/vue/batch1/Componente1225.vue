<template>
  <section class="panel-1225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1225");
const base = ref(1225);
const total = computed(() => base.value * 2);

function incrementar1225() {
  base.value++;
}
</script>
