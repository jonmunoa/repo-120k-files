<template>
  <section class="panel-11153">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11153");
const base = ref(11153);
const total = computed(() => base.value * 2);

function incrementar11153() {
  base.value++;
}
</script>
