<template>
  <section class="panel-54809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54809");
const base = ref(54809);
const total = computed(() => base.value * 2);

function incrementar54809() {
  base.value++;
}
</script>
