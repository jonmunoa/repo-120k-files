<template>
  <section class="panel-24333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24333");
const base = ref(24333);
const total = computed(() => base.value * 2);

function incrementar24333() {
  base.value++;
}
</script>
