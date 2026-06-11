<template>
  <section class="panel-2769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2769");
const base = ref(2769);
const total = computed(() => base.value * 2);

function incrementar2769() {
  base.value++;
}
</script>
