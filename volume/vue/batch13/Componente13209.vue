<template>
  <section class="panel-13209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13209");
const base = ref(13209);
const total = computed(() => base.value * 2);

function incrementar13209() {
  base.value++;
}
</script>
