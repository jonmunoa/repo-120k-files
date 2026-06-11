<template>
  <section class="panel-24601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24601");
const base = ref(24601);
const total = computed(() => base.value * 2);

function incrementar24601() {
  base.value++;
}
</script>
