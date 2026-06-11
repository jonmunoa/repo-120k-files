<template>
  <section class="panel-39321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39321");
const base = ref(39321);
const total = computed(() => base.value * 2);

function incrementar39321() {
  base.value++;
}
</script>
