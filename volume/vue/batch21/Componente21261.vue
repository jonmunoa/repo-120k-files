<template>
  <section class="panel-21261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21261");
const base = ref(21261);
const total = computed(() => base.value * 2);

function incrementar21261() {
  base.value++;
}
</script>
