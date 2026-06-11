<template>
  <section class="panel-10773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10773");
const base = ref(10773);
const total = computed(() => base.value * 2);

function incrementar10773() {
  base.value++;
}
</script>
