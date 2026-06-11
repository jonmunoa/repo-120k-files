<template>
  <section class="panel-2369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2369");
const base = ref(2369);
const total = computed(() => base.value * 2);

function incrementar2369() {
  base.value++;
}
</script>
