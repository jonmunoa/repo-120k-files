<template>
  <section class="panel-24433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24433");
const base = ref(24433);
const total = computed(() => base.value * 2);

function incrementar24433() {
  base.value++;
}
</script>
