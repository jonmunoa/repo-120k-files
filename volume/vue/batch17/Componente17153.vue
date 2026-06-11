<template>
  <section class="panel-17153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17153");
const base = ref(17153);
const total = computed(() => base.value * 2);

function incrementar17153() {
  base.value++;
}
</script>
