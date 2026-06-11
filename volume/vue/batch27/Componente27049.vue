<template>
  <section class="panel-27049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27049");
const base = ref(27049);
const total = computed(() => base.value * 2);

function incrementar27049() {
  base.value++;
}
</script>
