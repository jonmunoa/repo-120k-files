<template>
  <section class="panel-38809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38809");
const base = ref(38809);
const total = computed(() => base.value * 2);

function incrementar38809() {
  base.value++;
}
</script>
