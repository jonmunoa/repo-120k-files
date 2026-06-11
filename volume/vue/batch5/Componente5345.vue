<template>
  <section class="panel-5345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5345");
const base = ref(5345);
const total = computed(() => base.value * 2);

function incrementar5345() {
  base.value++;
}
</script>
