<template>
  <section class="panel-23773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23773");
const base = ref(23773);
const total = computed(() => base.value * 2);

function incrementar23773() {
  base.value++;
}
</script>
