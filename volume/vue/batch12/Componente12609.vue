<template>
  <section class="panel-12609">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12609");
const base = ref(12609);
const total = computed(() => base.value * 2);

function incrementar12609() {
  base.value++;
}
</script>
