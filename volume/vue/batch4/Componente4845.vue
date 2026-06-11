<template>
  <section class="panel-4845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4845");
const base = ref(4845);
const total = computed(() => base.value * 2);

function incrementar4845() {
  base.value++;
}
</script>
