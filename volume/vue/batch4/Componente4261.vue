<template>
  <section class="panel-4261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4261");
const base = ref(4261);
const total = computed(() => base.value * 2);

function incrementar4261() {
  base.value++;
}
</script>
