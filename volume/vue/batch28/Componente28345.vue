<template>
  <section class="panel-28345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 28345");
const base = ref(28345);
const total = computed(() => base.value * 2);

function incrementar28345() {
  base.value++;
}
</script>
