<template>
  <section class="panel-33429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33429");
const base = ref(33429);
const total = computed(() => base.value * 2);

function incrementar33429() {
  base.value++;
}
</script>
