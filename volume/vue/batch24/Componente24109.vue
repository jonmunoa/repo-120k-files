<template>
  <section class="panel-24109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24109");
const base = ref(24109);
const total = computed(() => base.value * 2);

function incrementar24109() {
  base.value++;
}
</script>
