<template>
  <section class="panel-40757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40757");
const base = ref(40757);
const total = computed(() => base.value * 2);

function incrementar40757() {
  base.value++;
}
</script>
