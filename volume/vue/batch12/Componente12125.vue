<template>
  <section class="panel-12125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12125");
const base = ref(12125);
const total = computed(() => base.value * 2);

function incrementar12125() {
  base.value++;
}
</script>
