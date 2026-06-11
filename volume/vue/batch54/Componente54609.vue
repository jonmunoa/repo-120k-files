<template>
  <section class="panel-54609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54609");
const base = ref(54609);
const total = computed(() => base.value * 2);

function incrementar54609() {
  base.value++;
}
</script>
