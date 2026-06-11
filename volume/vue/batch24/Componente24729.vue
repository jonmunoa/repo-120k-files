<template>
  <section class="panel-24729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24729");
const base = ref(24729);
const total = computed(() => base.value * 2);

function incrementar24729() {
  base.value++;
}
</script>
