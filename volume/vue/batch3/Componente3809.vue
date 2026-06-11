<template>
  <section class="panel-3809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3809");
const base = ref(3809);
const total = computed(() => base.value * 2);

function incrementar3809() {
  base.value++;
}
</script>
