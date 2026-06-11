<template>
  <section class="panel-36845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36845");
const base = ref(36845);
const total = computed(() => base.value * 2);

function incrementar36845() {
  base.value++;
}
</script>
