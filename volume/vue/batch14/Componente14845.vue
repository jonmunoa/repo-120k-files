<template>
  <section class="panel-14845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14845");
const base = ref(14845);
const total = computed(() => base.value * 2);

function incrementar14845() {
  base.value++;
}
</script>
