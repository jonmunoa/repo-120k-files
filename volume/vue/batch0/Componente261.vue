<template>
  <section class="panel-261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 261");
const base = ref(261);
const total = computed(() => base.value * 2);

function incrementar261() {
  base.value++;
}
</script>
