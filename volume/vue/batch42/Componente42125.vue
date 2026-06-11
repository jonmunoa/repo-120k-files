<template>
  <section class="panel-42125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42125");
const base = ref(42125);
const total = computed(() => base.value * 2);

function incrementar42125() {
  base.value++;
}
</script>
