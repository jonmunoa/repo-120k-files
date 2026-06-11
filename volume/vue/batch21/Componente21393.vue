<template>
  <section class="panel-21393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21393");
const base = ref(21393);
const total = computed(() => base.value * 2);

function incrementar21393() {
  base.value++;
}
</script>
