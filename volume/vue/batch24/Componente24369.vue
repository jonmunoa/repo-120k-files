<template>
  <section class="panel-24369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24369");
const base = ref(24369);
const total = computed(() => base.value * 2);

function incrementar24369() {
  base.value++;
}
</script>
