<template>
  <section class="panel-23081">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23081");
const base = ref(23081);
const total = computed(() => base.value * 2);

function incrementar23081() {
  base.value++;
}
</script>
