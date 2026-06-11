<template>
  <section class="panel-21541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21541");
const base = ref(21541);
const total = computed(() => base.value * 2);

function incrementar21541() {
  base.value++;
}
</script>
