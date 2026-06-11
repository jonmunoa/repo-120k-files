<template>
  <section class="panel-45325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45325");
const base = ref(45325);
const total = computed(() => base.value * 2);

function incrementar45325() {
  base.value++;
}
</script>
