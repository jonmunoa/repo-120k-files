<template>
  <section class="panel-5081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5081");
const base = ref(5081);
const total = computed(() => base.value * 2);

function incrementar5081() {
  base.value++;
}
</script>
