<template>
  <section class="panel-48429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48429");
const base = ref(48429);
const total = computed(() => base.value * 2);

function incrementar48429() {
  base.value++;
}
</script>
