<template>
  <section class="panel-24077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24077");
const base = ref(24077);
const total = computed(() => base.value * 2);

function incrementar24077() {
  base.value++;
}
</script>
