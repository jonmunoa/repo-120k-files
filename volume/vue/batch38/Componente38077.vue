<template>
  <section class="panel-38077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38077");
const base = ref(38077);
const total = computed(() => base.value * 2);

function incrementar38077() {
  base.value++;
}
</script>
