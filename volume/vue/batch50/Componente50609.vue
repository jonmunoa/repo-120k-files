<template>
  <section class="panel-50609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50609");
const base = ref(50609);
const total = computed(() => base.value * 2);

function incrementar50609() {
  base.value++;
}
</script>
