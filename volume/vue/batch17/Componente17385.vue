<template>
  <section class="panel-17385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17385");
const base = ref(17385);
const total = computed(() => base.value * 2);

function incrementar17385() {
  base.value++;
}
</script>
