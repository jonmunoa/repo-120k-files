<template>
  <section class="panel-4541">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4541");
const base = ref(4541);
const total = computed(() => base.value * 2);

function incrementar4541() {
  base.value++;
}
</script>
