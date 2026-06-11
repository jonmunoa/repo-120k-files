<template>
  <section class="panel-16845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16845");
const base = ref(16845);
const total = computed(() => base.value * 2);

function incrementar16845() {
  base.value++;
}
</script>
