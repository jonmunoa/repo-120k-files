<template>
  <section class="panel-12809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12809");
const base = ref(12809);
const total = computed(() => base.value * 2);

function incrementar12809() {
  base.value++;
}
</script>
