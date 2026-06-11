<template>
  <section class="panel-42741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42741");
const base = ref(42741);
const total = computed(() => base.value * 2);

function incrementar42741() {
  base.value++;
}
</script>
