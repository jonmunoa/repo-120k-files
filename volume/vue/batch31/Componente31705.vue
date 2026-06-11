<template>
  <section class="panel-31705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31705");
const base = ref(31705);
const total = computed(() => base.value * 2);

function incrementar31705() {
  base.value++;
}
</script>
