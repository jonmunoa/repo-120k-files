<template>
  <section class="panel-54125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54125");
const base = ref(54125);
const total = computed(() => base.value * 2);

function incrementar54125() {
  base.value++;
}
</script>
