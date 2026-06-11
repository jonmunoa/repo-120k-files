<template>
  <section class="panel-19301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19301");
const base = ref(19301);
const total = computed(() => base.value * 2);

function incrementar19301() {
  base.value++;
}
</script>
