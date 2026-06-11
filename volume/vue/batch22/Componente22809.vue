<template>
  <section class="panel-22809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22809");
const base = ref(22809);
const total = computed(() => base.value * 2);

function incrementar22809() {
  base.value++;
}
</script>
