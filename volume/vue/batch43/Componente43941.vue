<template>
  <section class="panel-43941">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43941");
const base = ref(43941);
const total = computed(() => base.value * 2);

function incrementar43941() {
  base.value++;
}
</script>
