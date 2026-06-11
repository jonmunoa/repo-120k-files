<template>
  <section class="panel-34125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34125");
const base = ref(34125);
const total = computed(() => base.value * 2);

function incrementar34125() {
  base.value++;
}
</script>
