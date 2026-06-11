<template>
  <section class="panel-53345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53345");
const base = ref(53345);
const total = computed(() => base.value * 2);

function incrementar53345() {
  base.value++;
}
</script>
