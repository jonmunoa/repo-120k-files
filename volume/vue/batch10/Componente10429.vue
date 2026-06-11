<template>
  <section class="panel-10429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10429");
const base = ref(10429);
const total = computed(() => base.value * 2);

function incrementar10429() {
  base.value++;
}
</script>
