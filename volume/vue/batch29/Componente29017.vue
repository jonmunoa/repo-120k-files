<template>
  <section class="panel-29017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29017");
const base = ref(29017);
const total = computed(() => base.value * 2);

function incrementar29017() {
  base.value++;
}
</script>
