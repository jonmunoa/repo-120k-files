<template>
  <section class="panel-15353">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15353");
const base = ref(15353);
const total = computed(() => base.value * 2);

function incrementar15353() {
  base.value++;
}
</script>
