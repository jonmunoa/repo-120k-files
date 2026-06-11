<template>
  <section class="panel-34705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34705");
const base = ref(34705);
const total = computed(() => base.value * 2);

function incrementar34705() {
  base.value++;
}
</script>
