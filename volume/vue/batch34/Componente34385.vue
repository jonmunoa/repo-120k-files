<template>
  <section class="panel-34385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34385");
const base = ref(34385);
const total = computed(() => base.value * 2);

function incrementar34385() {
  base.value++;
}
</script>
