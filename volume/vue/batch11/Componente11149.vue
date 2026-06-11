<template>
  <section class="panel-11149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11149");
const base = ref(11149);
const total = computed(() => base.value * 2);

function incrementar11149() {
  base.value++;
}
</script>
