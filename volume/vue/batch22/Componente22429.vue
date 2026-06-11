<template>
  <section class="panel-22429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22429");
const base = ref(22429);
const total = computed(() => base.value * 2);

function incrementar22429() {
  base.value++;
}
</script>
