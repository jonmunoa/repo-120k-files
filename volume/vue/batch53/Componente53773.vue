<template>
  <section class="panel-53773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53773");
const base = ref(53773);
const total = computed(() => base.value * 2);

function incrementar53773() {
  base.value++;
}
</script>
