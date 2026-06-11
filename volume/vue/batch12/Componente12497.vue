<template>
  <section class="panel-12497">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12497");
const base = ref(12497);
const total = computed(() => base.value * 2);

function incrementar12497() {
  base.value++;
}
</script>
