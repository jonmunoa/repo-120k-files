<template>
  <section class="panel-34797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34797");
const base = ref(34797);
const total = computed(() => base.value * 2);

function incrementar34797() {
  base.value++;
}
</script>
