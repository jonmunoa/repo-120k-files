<template>
  <section class="panel-9817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9817");
const base = ref(9817);
const total = computed(() => base.value * 2);

function incrementar9817() {
  base.value++;
}
</script>
