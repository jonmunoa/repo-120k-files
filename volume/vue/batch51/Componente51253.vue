<template>
  <section class="panel-51253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51253");
const base = ref(51253);
const total = computed(() => base.value * 2);

function incrementar51253() {
  base.value++;
}
</script>
