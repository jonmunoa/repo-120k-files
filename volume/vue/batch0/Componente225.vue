<template>
  <section class="panel-225">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 225");
const base = ref(225);
const total = computed(() => base.value * 2);

function incrementar225() {
  base.value++;
}
</script>
