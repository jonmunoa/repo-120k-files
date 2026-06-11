<template>
  <section class="panel-2757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2757");
const base = ref(2757);
const total = computed(() => base.value * 2);

function incrementar2757() {
  base.value++;
}
</script>
