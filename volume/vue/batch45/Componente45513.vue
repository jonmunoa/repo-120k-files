<template>
  <section class="panel-45513">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45513");
const base = ref(45513);
const total = computed(() => base.value * 2);

function incrementar45513() {
  base.value++;
}
</script>
