<template>
  <section class="panel-10973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10973");
const base = ref(10973);
const total = computed(() => base.value * 2);

function incrementar10973() {
  base.value++;
}
</script>
