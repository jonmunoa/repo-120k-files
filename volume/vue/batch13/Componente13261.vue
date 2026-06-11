<template>
  <section class="panel-13261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13261");
const base = ref(13261);
const total = computed(() => base.value * 2);

function incrementar13261() {
  base.value++;
}
</script>
