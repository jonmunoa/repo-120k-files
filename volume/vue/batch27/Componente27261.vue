<template>
  <section class="panel-27261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27261");
const base = ref(27261);
const total = computed(() => base.value * 2);

function incrementar27261() {
  base.value++;
}
</script>
