<template>
  <section class="panel-39125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39125");
const base = ref(39125);
const total = computed(() => base.value * 2);

function incrementar39125() {
  base.value++;
}
</script>
