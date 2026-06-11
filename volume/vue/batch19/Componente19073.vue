<template>
  <section class="panel-19073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19073");
const base = ref(19073);
const total = computed(() => base.value * 2);

function incrementar19073() {
  base.value++;
}
</script>
