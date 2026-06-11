<template>
  <section class="panel-45845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45845");
const base = ref(45845);
const total = computed(() => base.value * 2);

function incrementar45845() {
  base.value++;
}
</script>
