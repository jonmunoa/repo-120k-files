<template>
  <section class="panel-21809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21809");
const base = ref(21809);
const total = computed(() => base.value * 2);

function incrementar21809() {
  base.value++;
}
</script>
