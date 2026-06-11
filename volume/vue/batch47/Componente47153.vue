<template>
  <section class="panel-47153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47153");
const base = ref(47153);
const total = computed(() => base.value * 2);

function incrementar47153() {
  base.value++;
}
</script>
