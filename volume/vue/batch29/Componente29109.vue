<template>
  <section class="panel-29109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29109");
const base = ref(29109);
const total = computed(() => base.value * 2);

function incrementar29109() {
  base.value++;
}
</script>
