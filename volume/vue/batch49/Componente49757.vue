<template>
  <section class="panel-49757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49757");
const base = ref(49757);
const total = computed(() => base.value * 2);

function incrementar49757() {
  base.value++;
}
</script>
