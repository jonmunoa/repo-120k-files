<template>
  <section class="panel-47757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47757");
const base = ref(47757);
const total = computed(() => base.value * 2);

function incrementar47757() {
  base.value++;
}
</script>
