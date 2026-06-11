<template>
  <section class="panel-13881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13881");
const base = ref(13881);
const total = computed(() => base.value * 2);

function incrementar13881() {
  base.value++;
}
</script>
