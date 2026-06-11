<template>
  <section class="panel-24221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24221");
const base = ref(24221);
const total = computed(() => base.value * 2);

function incrementar24221() {
  base.value++;
}
</script>
