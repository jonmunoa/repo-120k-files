<template>
  <section class="panel-53289">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53289");
const base = ref(53289);
const total = computed(() => base.value * 2);

function incrementar53289() {
  base.value++;
}
</script>
