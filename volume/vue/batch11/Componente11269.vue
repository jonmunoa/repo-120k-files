<template>
  <section class="panel-11269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11269");
const base = ref(11269);
const total = computed(() => base.value * 2);

function incrementar11269() {
  base.value++;
}
</script>
