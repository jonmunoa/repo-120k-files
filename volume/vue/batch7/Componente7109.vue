<template>
  <section class="panel-7109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7109");
const base = ref(7109);
const total = computed(() => base.value * 2);

function incrementar7109() {
  base.value++;
}
</script>
