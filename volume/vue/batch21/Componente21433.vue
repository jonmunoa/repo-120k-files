<template>
  <section class="panel-21433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21433");
const base = ref(21433);
const total = computed(() => base.value * 2);

function incrementar21433() {
  base.value++;
}
</script>
