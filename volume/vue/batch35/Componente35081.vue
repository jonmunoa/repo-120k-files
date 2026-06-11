<template>
  <section class="panel-35081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35081");
const base = ref(35081);
const total = computed(() => base.value * 2);

function incrementar35081() {
  base.value++;
}
</script>
