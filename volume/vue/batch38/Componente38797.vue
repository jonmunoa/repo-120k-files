<template>
  <section class="panel-38797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38797");
const base = ref(38797);
const total = computed(() => base.value * 2);

function incrementar38797() {
  base.value++;
}
</script>
