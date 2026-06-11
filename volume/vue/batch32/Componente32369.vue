<template>
  <section class="panel-32369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32369");
const base = ref(32369);
const total = computed(() => base.value * 2);

function incrementar32369() {
  base.value++;
}
</script>
