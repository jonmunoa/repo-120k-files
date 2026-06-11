<template>
  <section class="panel-19369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19369");
const base = ref(19369);
const total = computed(() => base.value * 2);

function incrementar19369() {
  base.value++;
}
</script>
