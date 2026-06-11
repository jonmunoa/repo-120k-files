<template>
  <section class="panel-12001">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12001");
const base = ref(12001);
const total = computed(() => base.value * 2);

function incrementar12001() {
  base.value++;
}
</script>
