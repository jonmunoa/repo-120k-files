<template>
  <section class="panel-31109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31109");
const base = ref(31109);
const total = computed(() => base.value * 2);

function incrementar31109() {
  base.value++;
}
</script>
