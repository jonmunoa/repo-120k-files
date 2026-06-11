<template>
  <section class="panel-7649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7649");
const base = ref(7649);
const total = computed(() => base.value * 2);

function incrementar7649() {
  base.value++;
}
</script>
