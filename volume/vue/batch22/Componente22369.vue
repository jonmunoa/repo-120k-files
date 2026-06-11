<template>
  <section class="panel-22369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22369");
const base = ref(22369);
const total = computed(() => base.value * 2);

function incrementar22369() {
  base.value++;
}
</script>
