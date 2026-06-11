<template>
  <section class="panel-53817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53817");
const base = ref(53817);
const total = computed(() => base.value * 2);

function incrementar53817() {
  base.value++;
}
</script>
