<template>
  <section class="panel-44369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44369");
const base = ref(44369);
const total = computed(() => base.value * 2);

function incrementar44369() {
  base.value++;
}
</script>
