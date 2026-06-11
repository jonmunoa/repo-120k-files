<template>
  <section class="panel-50261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50261");
const base = ref(50261);
const total = computed(() => base.value * 2);

function incrementar50261() {
  base.value++;
}
</script>
