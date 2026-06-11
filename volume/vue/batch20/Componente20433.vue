<template>
  <section class="panel-20433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20433");
const base = ref(20433);
const total = computed(() => base.value * 2);

function incrementar20433() {
  base.value++;
}
</script>
