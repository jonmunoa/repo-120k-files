<template>
  <section class="panel-17705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17705");
const base = ref(17705);
const total = computed(() => base.value * 2);

function incrementar17705() {
  base.value++;
}
</script>
