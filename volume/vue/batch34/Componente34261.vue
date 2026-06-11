<template>
  <section class="panel-34261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34261");
const base = ref(34261);
const total = computed(() => base.value * 2);

function incrementar34261() {
  base.value++;
}
</script>
