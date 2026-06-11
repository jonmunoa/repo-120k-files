<template>
  <section class="panel-48105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48105");
const base = ref(48105);
const total = computed(() => base.value * 2);

function incrementar48105() {
  base.value++;
}
</script>
