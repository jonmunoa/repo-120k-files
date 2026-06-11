<template>
  <section class="panel-6609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6609");
const base = ref(6609);
const total = computed(() => base.value * 2);

function incrementar6609() {
  base.value++;
}
</script>
