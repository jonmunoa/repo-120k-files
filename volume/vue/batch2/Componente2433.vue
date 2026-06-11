<template>
  <section class="panel-2433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2433");
const base = ref(2433);
const total = computed(() => base.value * 2);

function incrementar2433() {
  base.value++;
}
</script>
