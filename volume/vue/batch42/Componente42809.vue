<template>
  <section class="panel-42809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42809");
const base = ref(42809);
const total = computed(() => base.value * 2);

function incrementar42809() {
  base.value++;
}
</script>
