<template>
  <section class="panel-17757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17757");
const base = ref(17757);
const total = computed(() => base.value * 2);

function incrementar17757() {
  base.value++;
}
</script>
