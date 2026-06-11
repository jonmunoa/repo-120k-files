<template>
  <section class="panel-15541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15541");
const base = ref(15541);
const total = computed(() => base.value * 2);

function incrementar15541() {
  base.value++;
}
</script>
