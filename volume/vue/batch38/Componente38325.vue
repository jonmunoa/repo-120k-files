<template>
  <section class="panel-38325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38325");
const base = ref(38325);
const total = computed(() => base.value * 2);

function incrementar38325() {
  base.value++;
}
</script>
