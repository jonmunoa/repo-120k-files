<template>
  <section class="panel-13137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13137");
const base = ref(13137);
const total = computed(() => base.value * 2);

function incrementar13137() {
  base.value++;
}
</script>
