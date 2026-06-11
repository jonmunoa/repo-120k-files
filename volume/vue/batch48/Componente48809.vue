<template>
  <section class="panel-48809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48809");
const base = ref(48809);
const total = computed(() => base.value * 2);

function incrementar48809() {
  base.value++;
}
</script>
