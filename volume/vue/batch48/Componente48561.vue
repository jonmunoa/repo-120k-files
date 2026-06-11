<template>
  <section class="panel-48561">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48561");
const base = ref(48561);
const total = computed(() => base.value * 2);

function incrementar48561() {
  base.value++;
}
</script>
