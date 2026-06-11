<template>
  <section class="panel-44601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44601");
const base = ref(44601);
const total = computed(() => base.value * 2);

function incrementar44601() {
  base.value++;
}
</script>
