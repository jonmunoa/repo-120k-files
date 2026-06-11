<template>
  <section class="panel-27153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27153");
const base = ref(27153);
const total = computed(() => base.value * 2);

function incrementar27153() {
  base.value++;
}
</script>
