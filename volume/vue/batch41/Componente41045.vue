<template>
  <section class="panel-41045">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41045");
const base = ref(41045);
const total = computed(() => base.value * 2);

function incrementar41045() {
  base.value++;
}
</script>
