<template>
  <section class="panel-9153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9153");
const base = ref(9153);
const total = computed(() => base.value * 2);

function incrementar9153() {
  base.value++;
}
</script>
