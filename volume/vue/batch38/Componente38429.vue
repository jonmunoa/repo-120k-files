<template>
  <section class="panel-38429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38429");
const base = ref(38429);
const total = computed(() => base.value * 2);

function incrementar38429() {
  base.value++;
}
</script>
