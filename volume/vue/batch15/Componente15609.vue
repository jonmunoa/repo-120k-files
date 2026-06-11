<template>
  <section class="panel-15609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15609");
const base = ref(15609);
const total = computed(() => base.value * 2);

function incrementar15609() {
  base.value++;
}
</script>
