<template>
  <section class="panel-13433">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13433");
const base = ref(13433);
const total = computed(() => base.value * 2);

function incrementar13433() {
  base.value++;
}
</script>
