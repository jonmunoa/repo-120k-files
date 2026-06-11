<template>
  <section class="panel-42017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42017");
const base = ref(42017);
const total = computed(() => base.value * 2);

function incrementar42017() {
  base.value++;
}
</script>
