<template>
  <section class="panel-12109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12109");
const base = ref(12109);
const total = computed(() => base.value * 2);

function incrementar12109() {
  base.value++;
}
</script>
