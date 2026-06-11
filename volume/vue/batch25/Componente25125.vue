<template>
  <section class="panel-25125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25125");
const base = ref(25125);
const total = computed(() => base.value * 2);

function incrementar25125() {
  base.value++;
}
</script>
