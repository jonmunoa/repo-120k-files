<template>
  <section class="panel-56461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56461");
const base = ref(56461);
const total = computed(() => base.value * 2);

function incrementar56461() {
  base.value++;
}
</script>
