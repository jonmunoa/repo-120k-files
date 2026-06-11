<template>
  <section class="panel-52369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52369");
const base = ref(52369);
const total = computed(() => base.value * 2);

function incrementar52369() {
  base.value++;
}
</script>
