<template>
  <section class="panel-11665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11665");
const base = ref(11665);
const total = computed(() => base.value * 2);

function incrementar11665() {
  base.value++;
}
</script>
