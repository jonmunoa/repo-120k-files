<template>
  <section class="panel-52845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52845");
const base = ref(52845);
const total = computed(() => base.value * 2);

function incrementar52845() {
  base.value++;
}
</script>
