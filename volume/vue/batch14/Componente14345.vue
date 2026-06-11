<template>
  <section class="panel-14345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14345");
const base = ref(14345);
const total = computed(() => base.value * 2);

function incrementar14345() {
  base.value++;
}
</script>
