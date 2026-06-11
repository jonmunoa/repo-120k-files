<template>
  <section class="panel-25081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25081");
const base = ref(25081);
const total = computed(() => base.value * 2);

function incrementar25081() {
  base.value++;
}
</script>
