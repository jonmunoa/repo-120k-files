<template>
  <section class="panel-22601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22601");
const base = ref(22601);
const total = computed(() => base.value * 2);

function incrementar22601() {
  base.value++;
}
</script>
