<template>
  <section class="panel-17137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17137");
const base = ref(17137);
const total = computed(() => base.value * 2);

function incrementar17137() {
  base.value++;
}
</script>
