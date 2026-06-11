<template>
  <section class="panel-52325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52325");
const base = ref(52325);
const total = computed(() => base.value * 2);

function incrementar52325() {
  base.value++;
}
</script>
