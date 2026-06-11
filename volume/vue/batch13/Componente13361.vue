<template>
  <section class="panel-13361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13361");
const base = ref(13361);
const total = computed(() => base.value * 2);

function incrementar13361() {
  base.value++;
}
</script>
