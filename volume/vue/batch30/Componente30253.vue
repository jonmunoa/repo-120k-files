<template>
  <section class="panel-30253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30253");
const base = ref(30253);
const total = computed(() => base.value * 2);

function incrementar30253() {
  base.value++;
}
</script>
