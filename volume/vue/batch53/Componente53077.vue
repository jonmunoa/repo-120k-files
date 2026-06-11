<template>
  <section class="panel-53077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53077");
const base = ref(53077);
const total = computed(() => base.value * 2);

function incrementar53077() {
  base.value++;
}
</script>
