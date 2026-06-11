<template>
  <section class="panel-18757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18757");
const base = ref(18757);
const total = computed(() => base.value * 2);

function incrementar18757() {
  base.value++;
}
</script>
