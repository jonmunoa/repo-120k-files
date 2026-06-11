<template>
  <section class="panel-22973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22973");
const base = ref(22973);
const total = computed(() => base.value * 2);

function incrementar22973() {
  base.value++;
}
</script>
