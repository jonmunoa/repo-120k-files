<template>
  <section class="panel-31221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31221");
const base = ref(31221);
const total = computed(() => base.value * 2);

function incrementar31221() {
  base.value++;
}
</script>
