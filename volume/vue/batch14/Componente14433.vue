<template>
  <section class="panel-14433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14433");
const base = ref(14433);
const total = computed(() => base.value * 2);

function incrementar14433() {
  base.value++;
}
</script>
