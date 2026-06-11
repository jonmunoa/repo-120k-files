<template>
  <section class="panel-53845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53845");
const base = ref(53845);
const total = computed(() => base.value * 2);

function incrementar53845() {
  base.value++;
}
</script>
