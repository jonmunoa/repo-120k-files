<template>
  <section class="panel-29253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29253");
const base = ref(29253);
const total = computed(() => base.value * 2);

function incrementar29253() {
  base.value++;
}
</script>
