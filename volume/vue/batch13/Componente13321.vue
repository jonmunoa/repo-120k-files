<template>
  <section class="panel-13321">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13321");
const base = ref(13321);
const total = computed(() => base.value * 2);

function incrementar13321() {
  base.value++;
}
</script>
