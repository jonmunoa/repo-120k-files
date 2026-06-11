<template>
  <section class="panel-39073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39073");
const base = ref(39073);
const total = computed(() => base.value * 2);

function incrementar39073() {
  base.value++;
}
</script>
