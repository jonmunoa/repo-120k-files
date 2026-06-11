<template>
  <section class="panel-37433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37433");
const base = ref(37433);
const total = computed(() => base.value * 2);

function incrementar37433() {
  base.value++;
}
</script>
