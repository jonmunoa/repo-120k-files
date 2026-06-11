<template>
  <section class="panel-37221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37221");
const base = ref(37221);
const total = computed(() => base.value * 2);

function incrementar37221() {
  base.value++;
}
</script>
