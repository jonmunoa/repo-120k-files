<template>
  <section class="panel-1209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1209");
const base = ref(1209);
const total = computed(() => base.value * 2);

function incrementar1209() {
  base.value++;
}
</script>
