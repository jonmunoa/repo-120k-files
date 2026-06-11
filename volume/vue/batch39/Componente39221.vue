<template>
  <section class="panel-39221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39221");
const base = ref(39221);
const total = computed(() => base.value * 2);

function incrementar39221() {
  base.value++;
}
</script>
