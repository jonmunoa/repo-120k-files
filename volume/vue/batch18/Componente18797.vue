<template>
  <section class="panel-18797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18797");
const base = ref(18797);
const total = computed(() => base.value * 2);

function incrementar18797() {
  base.value++;
}
</script>
