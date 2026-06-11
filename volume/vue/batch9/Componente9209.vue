<template>
  <section class="panel-9209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9209");
const base = ref(9209);
const total = computed(() => base.value * 2);

function incrementar9209() {
  base.value++;
}
</script>
