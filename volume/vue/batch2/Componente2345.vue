<template>
  <section class="panel-2345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2345");
const base = ref(2345);
const total = computed(() => base.value * 2);

function incrementar2345() {
  base.value++;
}
</script>
