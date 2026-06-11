<template>
  <section class="panel-16073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16073");
const base = ref(16073);
const total = computed(() => base.value * 2);

function incrementar16073() {
  base.value++;
}
</script>
