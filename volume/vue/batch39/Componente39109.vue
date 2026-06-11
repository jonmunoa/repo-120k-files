<template>
  <section class="panel-39109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39109");
const base = ref(39109);
const total = computed(() => base.value * 2);

function incrementar39109() {
  base.value++;
}
</script>
