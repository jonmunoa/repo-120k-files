<template>
  <section class="panel-44073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44073");
const base = ref(44073);
const total = computed(() => base.value * 2);

function incrementar44073() {
  base.value++;
}
</script>
