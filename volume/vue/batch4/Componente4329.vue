<template>
  <section class="panel-4329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4329");
const base = ref(4329);
const total = computed(() => base.value * 2);

function incrementar4329() {
  base.value++;
}
</script>
