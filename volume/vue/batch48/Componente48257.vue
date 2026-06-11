<template>
  <section class="panel-48257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48257");
const base = ref(48257);
const total = computed(() => base.value * 2);

function incrementar48257() {
  base.value++;
}
</script>
