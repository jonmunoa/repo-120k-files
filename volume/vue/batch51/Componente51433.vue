<template>
  <section class="panel-51433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51433");
const base = ref(51433);
const total = computed(() => base.value * 2);

function incrementar51433() {
  base.value++;
}
</script>
