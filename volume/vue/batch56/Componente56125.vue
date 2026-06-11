<template>
  <section class="panel-56125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56125");
const base = ref(56125);
const total = computed(() => base.value * 2);

function incrementar56125() {
  base.value++;
}
</script>
