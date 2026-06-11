<template>
  <section class="panel-15125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15125");
const base = ref(15125);
const total = computed(() => base.value * 2);

function incrementar15125() {
  base.value++;
}
</script>
