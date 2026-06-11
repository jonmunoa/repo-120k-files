<template>
  <section class="panel-24833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24833");
const base = ref(24833);
const total = computed(() => base.value * 2);

function incrementar24833() {
  base.value++;
}
</script>
