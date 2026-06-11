<template>
  <section class="panel-2253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2253");
const base = ref(2253);
const total = computed(() => base.value * 2);

function incrementar2253() {
  base.value++;
}
</script>
