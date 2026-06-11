<template>
  <section class="panel-32125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32125");
const base = ref(32125);
const total = computed(() => base.value * 2);

function incrementar32125() {
  base.value++;
}
</script>
