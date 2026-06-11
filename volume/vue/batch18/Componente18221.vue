<template>
  <section class="panel-18221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18221");
const base = ref(18221);
const total = computed(() => base.value * 2);

function incrementar18221() {
  base.value++;
}
</script>
