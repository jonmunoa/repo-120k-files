<template>
  <section class="panel-9081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9081");
const base = ref(9081);
const total = computed(() => base.value * 2);

function incrementar9081() {
  base.value++;
}
</script>
