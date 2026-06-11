<template>
  <section class="panel-56481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56481");
const base = ref(56481);
const total = computed(() => base.value * 2);

function incrementar56481() {
  base.value++;
}
</script>
