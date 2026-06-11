<template>
  <section class="panel-40081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40081");
const base = ref(40081);
const total = computed(() => base.value * 2);

function incrementar40081() {
  base.value++;
}
</script>
