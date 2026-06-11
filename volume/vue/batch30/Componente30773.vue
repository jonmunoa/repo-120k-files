<template>
  <section class="panel-30773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30773");
const base = ref(30773);
const total = computed(() => base.value * 2);

function incrementar30773() {
  base.value++;
}
</script>
