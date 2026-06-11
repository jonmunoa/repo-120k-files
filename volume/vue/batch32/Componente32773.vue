<template>
  <section class="panel-32773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32773");
const base = ref(32773);
const total = computed(() => base.value * 2);

function incrementar32773() {
  base.value++;
}
</script>
