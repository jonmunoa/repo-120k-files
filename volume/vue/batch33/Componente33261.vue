<template>
  <section class="panel-33261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33261");
const base = ref(33261);
const total = computed(() => base.value * 2);

function incrementar33261() {
  base.value++;
}
</script>
