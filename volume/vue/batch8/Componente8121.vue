<template>
  <section class="panel-8121">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8121");
const base = ref(8121);
const total = computed(() => base.value * 2);

function incrementar8121() {
  base.value++;
}
</script>
