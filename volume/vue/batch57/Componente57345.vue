<template>
  <section class="panel-57345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57345");
const base = ref(57345);
const total = computed(() => base.value * 2);

function incrementar57345() {
  base.value++;
}
</script>
