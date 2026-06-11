<template>
  <section class="panel-36393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36393");
const base = ref(36393);
const total = computed(() => base.value * 2);

function incrementar36393() {
  base.value++;
}
</script>
