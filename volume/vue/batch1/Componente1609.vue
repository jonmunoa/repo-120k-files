<template>
  <section class="panel-1609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1609");
const base = ref(1609);
const total = computed(() => base.value * 2);

function incrementar1609() {
  base.value++;
}
</script>
