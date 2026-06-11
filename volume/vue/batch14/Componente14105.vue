<template>
  <section class="panel-14105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14105");
const base = ref(14105);
const total = computed(() => base.value * 2);

function incrementar14105() {
  base.value++;
}
</script>
