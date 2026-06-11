<template>
  <section class="panel-19105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19105");
const base = ref(19105);
const total = computed(() => base.value * 2);

function incrementar19105() {
  base.value++;
}
</script>
