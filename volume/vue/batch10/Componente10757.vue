<template>
  <section class="panel-10757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10757");
const base = ref(10757);
const total = computed(() => base.value * 2);

function incrementar10757() {
  base.value++;
}
</script>
