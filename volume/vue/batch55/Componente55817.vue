<template>
  <section class="panel-55817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55817");
const base = ref(55817);
const total = computed(() => base.value * 2);

function incrementar55817() {
  base.value++;
}
</script>
