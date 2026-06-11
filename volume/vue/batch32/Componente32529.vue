<template>
  <section class="panel-32529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32529");
const base = ref(32529);
const total = computed(() => base.value * 2);

function incrementar32529() {
  base.value++;
}
</script>
