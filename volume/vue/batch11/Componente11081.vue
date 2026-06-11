<template>
  <section class="panel-11081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11081");
const base = ref(11081);
const total = computed(() => base.value * 2);

function incrementar11081() {
  base.value++;
}
</script>
