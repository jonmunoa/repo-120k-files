<template>
  <section class="panel-15253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15253");
const base = ref(15253);
const total = computed(() => base.value * 2);

function incrementar15253() {
  base.value++;
}
</script>
