<template>
  <section class="panel-31081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31081");
const base = ref(31081);
const total = computed(() => base.value * 2);

function incrementar31081() {
  base.value++;
}
</script>
