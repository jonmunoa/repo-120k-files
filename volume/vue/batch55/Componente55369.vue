<template>
  <section class="panel-55369">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55369");
const base = ref(55369);
const total = computed(() => base.value * 2);

function incrementar55369() {
  base.value++;
}
</script>
