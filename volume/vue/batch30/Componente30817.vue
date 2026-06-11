<template>
  <section class="panel-30817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30817");
const base = ref(30817);
const total = computed(() => base.value * 2);

function incrementar30817() {
  base.value++;
}
</script>
