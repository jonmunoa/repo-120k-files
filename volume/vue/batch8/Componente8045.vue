<template>
  <section class="panel-8045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8045");
const base = ref(8045);
const total = computed(() => base.value * 2);

function incrementar8045() {
  base.value++;
}
</script>
