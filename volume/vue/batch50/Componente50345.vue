<template>
  <section class="panel-50345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50345");
const base = ref(50345);
const total = computed(() => base.value * 2);

function incrementar50345() {
  base.value++;
}
</script>
