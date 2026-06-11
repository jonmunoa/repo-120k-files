<template>
  <section class="panel-49125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49125");
const base = ref(49125);
const total = computed(() => base.value * 2);

function incrementar49125() {
  base.value++;
}
</script>
