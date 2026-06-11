<template>
  <section class="panel-33973">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33973");
const base = ref(33973);
const total = computed(() => base.value * 2);

function incrementar33973() {
  base.value++;
}
</script>
