<template>
  <section class="panel-19269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19269");
const base = ref(19269);
const total = computed(() => base.value * 2);

function incrementar19269() {
  base.value++;
}
</script>
