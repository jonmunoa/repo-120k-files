<template>
  <section class="panel-27973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27973");
const base = ref(27973);
const total = computed(() => base.value * 2);

function incrementar27973() {
  base.value++;
}
</script>
