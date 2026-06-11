<template>
  <section class="panel-20349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20349");
const base = ref(20349);
const total = computed(() => base.value * 2);

function incrementar20349() {
  base.value++;
}
</script>
