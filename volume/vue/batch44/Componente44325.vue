<template>
  <section class="panel-44325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44325");
const base = ref(44325);
const total = computed(() => base.value * 2);

function incrementar44325() {
  base.value++;
}
</script>
