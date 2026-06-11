<template>
  <section class="panel-42845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42845");
const base = ref(42845);
const total = computed(() => base.value * 2);

function incrementar42845() {
  base.value++;
}
</script>
