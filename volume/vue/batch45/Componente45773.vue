<template>
  <section class="panel-45773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45773");
const base = ref(45773);
const total = computed(() => base.value * 2);

function incrementar45773() {
  base.value++;
}
</script>
