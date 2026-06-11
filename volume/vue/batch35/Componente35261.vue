<template>
  <section class="panel-35261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35261");
const base = ref(35261);
const total = computed(() => base.value * 2);

function incrementar35261() {
  base.value++;
}
</script>
