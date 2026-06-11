<template>
  <section class="panel-45033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45033");
const base = ref(45033);
const total = computed(() => base.value * 2);

function incrementar45033() {
  base.value++;
}
</script>
