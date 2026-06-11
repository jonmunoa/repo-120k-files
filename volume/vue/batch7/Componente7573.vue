<template>
  <section class="panel-7573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7573");
const base = ref(7573);
const total = computed(() => base.value * 2);

function incrementar7573() {
  base.value++;
}
</script>
