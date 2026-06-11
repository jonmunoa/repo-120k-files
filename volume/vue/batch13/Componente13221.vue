<template>
  <section class="panel-13221">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13221");
const base = ref(13221);
const total = computed(() => base.value * 2);

function incrementar13221() {
  base.value++;
}
</script>
