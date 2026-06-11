<template>
  <section class="panel-14813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14813");
const base = ref(14813);
const total = computed(() => base.value * 2);

function incrementar14813() {
  base.value++;
}
</script>
