<template>
  <section class="panel-45641">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45641");
const base = ref(45641);
const total = computed(() => base.value * 2);

function incrementar45641() {
  base.value++;
}
</script>
