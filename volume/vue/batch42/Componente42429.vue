<template>
  <section class="panel-42429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42429");
const base = ref(42429);
const total = computed(() => base.value * 2);

function incrementar42429() {
  base.value++;
}
</script>
