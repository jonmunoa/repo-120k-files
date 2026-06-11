<template>
  <section class="panel-85">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 85");
const base = ref(85);
const total = computed(() => base.value * 2);

function incrementar85() {
  base.value++;
}
</script>
