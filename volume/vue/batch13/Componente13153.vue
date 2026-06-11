<template>
  <section class="panel-13153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13153");
const base = ref(13153);
const total = computed(() => base.value * 2);

function incrementar13153() {
  base.value++;
}
</script>
