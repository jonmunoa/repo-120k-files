<template>
  <section class="panel-41253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41253");
const base = ref(41253);
const total = computed(() => base.value * 2);

function incrementar41253() {
  base.value++;
}
</script>
