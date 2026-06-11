<template>
  <section class="panel-4017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4017");
const base = ref(4017);
const total = computed(() => base.value * 2);

function incrementar4017() {
  base.value++;
}
</script>
