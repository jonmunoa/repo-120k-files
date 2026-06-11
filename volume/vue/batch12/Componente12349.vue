<template>
  <section class="panel-12349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12349");
const base = ref(12349);
const total = computed(() => base.value * 2);

function incrementar12349() {
  base.value++;
}
</script>
