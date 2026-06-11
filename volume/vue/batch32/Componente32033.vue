<template>
  <section class="panel-32033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32033");
const base = ref(32033);
const total = computed(() => base.value * 2);

function incrementar32033() {
  base.value++;
}
</script>
