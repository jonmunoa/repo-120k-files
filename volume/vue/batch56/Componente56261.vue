<template>
  <section class="panel-56261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56261");
const base = ref(56261);
const total = computed(() => base.value * 2);

function incrementar56261() {
  base.value++;
}
</script>
