<template>
  <section class="panel-38457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38457");
const base = ref(38457);
const total = computed(() => base.value * 2);

function incrementar38457() {
  base.value++;
}
</script>
