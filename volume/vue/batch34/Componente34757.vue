<template>
  <section class="panel-34757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34757");
const base = ref(34757);
const total = computed(() => base.value * 2);

function incrementar34757() {
  base.value++;
}
</script>
