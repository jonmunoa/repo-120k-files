<template>
  <section class="panel-52601">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52601");
const base = ref(52601);
const total = computed(() => base.value * 2);

function incrementar52601() {
  base.value++;
}
</script>
