<template>
  <section class="panel-29125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29125");
const base = ref(29125);
const total = computed(() => base.value * 2);

function incrementar29125() {
  base.value++;
}
</script>
