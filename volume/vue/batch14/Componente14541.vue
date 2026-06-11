<template>
  <section class="panel-14541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14541");
const base = ref(14541);
const total = computed(() => base.value * 2);

function incrementar14541() {
  base.value++;
}
</script>
