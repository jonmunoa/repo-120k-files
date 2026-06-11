<template>
  <section class="panel-13241">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13241");
const base = ref(13241);
const total = computed(() => base.value * 2);

function incrementar13241() {
  base.value++;
}
</script>
