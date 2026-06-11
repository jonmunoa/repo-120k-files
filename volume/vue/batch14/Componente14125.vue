<template>
  <section class="panel-14125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14125");
const base = ref(14125);
const total = computed(() => base.value * 2);

function incrementar14125() {
  base.value++;
}
</script>
