<template>
  <section class="panel-56705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56705");
const base = ref(56705);
const total = computed(() => base.value * 2);

function incrementar56705() {
  base.value++;
}
</script>
