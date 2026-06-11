<template>
  <section class="panel-37077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37077");
const base = ref(37077);
const total = computed(() => base.value * 2);

function incrementar37077() {
  base.value++;
}
</script>
