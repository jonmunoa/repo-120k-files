<template>
  <section class="panel-8345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8345");
const base = ref(8345);
const total = computed(() => base.value * 2);

function incrementar8345() {
  base.value++;
}
</script>
