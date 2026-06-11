<template>
  <section class="panel-39845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39845");
const base = ref(39845);
const total = computed(() => base.value * 2);

function incrementar39845() {
  base.value++;
}
</script>
