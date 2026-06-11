<template>
  <section class="panel-52125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52125");
const base = ref(52125);
const total = computed(() => base.value * 2);

function incrementar52125() {
  base.value++;
}
</script>
