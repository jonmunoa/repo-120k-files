<template>
  <section class="panel-12521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12521");
const base = ref(12521);
const total = computed(() => base.value * 2);

function incrementar12521() {
  base.value++;
}
</script>
