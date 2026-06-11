<template>
  <section class="panel-42541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42541");
const base = ref(42541);
const total = computed(() => base.value * 2);

function incrementar42541() {
  base.value++;
}
</script>
