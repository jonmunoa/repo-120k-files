<template>
  <section class="panel-13257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13257");
const base = ref(13257);
const total = computed(() => base.value * 2);

function incrementar13257() {
  base.value++;
}
</script>
