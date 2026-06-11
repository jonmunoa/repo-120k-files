<template>
  <section class="panel-21153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21153");
const base = ref(21153);
const total = computed(() => base.value * 2);

function incrementar21153() {
  base.value++;
}
</script>
