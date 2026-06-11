<template>
  <section class="panel-23817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23817");
const base = ref(23817);
const total = computed(() => base.value * 2);

function incrementar23817() {
  base.value++;
}
</script>
