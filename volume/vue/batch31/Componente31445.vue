<template>
  <section class="panel-31445">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31445");
const base = ref(31445);
const total = computed(() => base.value * 2);

function incrementar31445() {
  base.value++;
}
</script>
