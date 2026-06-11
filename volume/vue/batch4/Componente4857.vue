<template>
  <section class="panel-4857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4857");
const base = ref(4857);
const total = computed(() => base.value * 2);

function incrementar4857() {
  base.value++;
}
</script>
