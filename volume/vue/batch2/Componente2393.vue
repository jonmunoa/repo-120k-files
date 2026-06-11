<template>
  <section class="panel-2393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2393");
const base = ref(2393);
const total = computed(() => base.value * 2);

function incrementar2393() {
  base.value++;
}
</script>
