<template>
  <section class="panel-5773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5773");
const base = ref(5773);
const total = computed(() => base.value * 2);

function incrementar5773() {
  base.value++;
}
</script>
