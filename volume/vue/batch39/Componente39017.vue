<template>
  <section class="panel-39017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39017");
const base = ref(39017);
const total = computed(() => base.value * 2);

function incrementar39017() {
  base.value++;
}
</script>
