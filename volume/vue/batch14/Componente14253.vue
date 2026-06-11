<template>
  <section class="panel-14253">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14253");
const base = ref(14253);
const total = computed(() => base.value * 2);

function incrementar14253() {
  base.value++;
}
</script>
