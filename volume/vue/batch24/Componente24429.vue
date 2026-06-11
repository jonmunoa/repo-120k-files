<template>
  <section class="panel-24429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24429");
const base = ref(24429);
const total = computed(() => base.value * 2);

function incrementar24429() {
  base.value++;
}
</script>
