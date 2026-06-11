<template>
  <section class="panel-19429">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19429");
const base = ref(19429);
const total = computed(() => base.value * 2);

function incrementar19429() {
  base.value++;
}
</script>
