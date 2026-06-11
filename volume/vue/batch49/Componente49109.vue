<template>
  <section class="panel-49109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49109");
const base = ref(49109);
const total = computed(() => base.value * 2);

function incrementar49109() {
  base.value++;
}
</script>
