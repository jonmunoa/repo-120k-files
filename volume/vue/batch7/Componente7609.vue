<template>
  <section class="panel-7609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7609");
const base = ref(7609);
const total = computed(() => base.value * 2);

function incrementar7609() {
  base.value++;
}
</script>
