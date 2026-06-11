<template>
  <section class="panel-22441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22441");
const base = ref(22441);
const total = computed(() => base.value * 2);

function incrementar22441() {
  base.value++;
}
</script>
