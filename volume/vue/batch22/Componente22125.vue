<template>
  <section class="panel-22125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22125");
const base = ref(22125);
const total = computed(() => base.value * 2);

function incrementar22125() {
  base.value++;
}
</script>
