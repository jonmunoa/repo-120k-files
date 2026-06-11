<template>
  <section class="panel-22949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22949");
const base = ref(22949);
const total = computed(() => base.value * 2);

function incrementar22949() {
  base.value++;
}
</script>
