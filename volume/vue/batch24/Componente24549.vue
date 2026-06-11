<template>
  <section class="panel-24549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24549");
const base = ref(24549);
const total = computed(() => base.value * 2);

function incrementar24549() {
  base.value++;
}
</script>
