<template>
  <section class="panel-51229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51229");
const base = ref(51229);
const total = computed(() => base.value * 2);

function incrementar51229() {
  base.value++;
}
</script>
