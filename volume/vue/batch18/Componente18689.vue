<template>
  <section class="panel-18689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18689");
const base = ref(18689);
const total = computed(() => base.value * 2);

function incrementar18689() {
  base.value++;
}
</script>
