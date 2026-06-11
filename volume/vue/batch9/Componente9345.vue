<template>
  <section class="panel-9345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9345");
const base = ref(9345);
const total = computed(() => base.value * 2);

function incrementar9345() {
  base.value++;
}
</script>
