<template>
  <section class="panel-24325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24325");
const base = ref(24325);
const total = computed(() => base.value * 2);

function incrementar24325() {
  base.value++;
}
</script>
