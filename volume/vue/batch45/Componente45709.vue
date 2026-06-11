<template>
  <section class="panel-45709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45709");
const base = ref(45709);
const total = computed(() => base.value * 2);

function incrementar45709() {
  base.value++;
}
</script>
