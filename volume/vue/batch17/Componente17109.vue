<template>
  <section class="panel-17109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17109");
const base = ref(17109);
const total = computed(() => base.value * 2);

function incrementar17109() {
  base.value++;
}
</script>
