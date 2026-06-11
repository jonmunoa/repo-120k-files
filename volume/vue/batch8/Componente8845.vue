<template>
  <section class="panel-8845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8845");
const base = ref(8845);
const total = computed(() => base.value * 2);

function incrementar8845() {
  base.value++;
}
</script>
