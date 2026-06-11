<template>
  <section class="panel-38345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38345");
const base = ref(38345);
const total = computed(() => base.value * 2);

function incrementar38345() {
  base.value++;
}
</script>
