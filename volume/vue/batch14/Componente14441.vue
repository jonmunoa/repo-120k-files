<template>
  <section class="panel-14441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14441");
const base = ref(14441);
const total = computed(() => base.value * 2);

function incrementar14441() {
  base.value++;
}
</script>
