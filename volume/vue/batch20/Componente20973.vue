<template>
  <section class="panel-20973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20973");
const base = ref(20973);
const total = computed(() => base.value * 2);

function incrementar20973() {
  base.value++;
}
</script>
