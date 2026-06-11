<template>
  <section class="panel-43577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43577");
const base = ref(43577);
const total = computed(() => base.value * 2);

function incrementar43577() {
  base.value++;
}
</script>
