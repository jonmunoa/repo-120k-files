<template>
  <section class="panel-13973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13973");
const base = ref(13973);
const total = computed(() => base.value * 2);

function incrementar13973() {
  base.value++;
}
</script>
