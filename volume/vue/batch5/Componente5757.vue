<template>
  <section class="panel-5757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5757");
const base = ref(5757);
const total = computed(() => base.value * 2);

function incrementar5757() {
  base.value++;
}
</script>
