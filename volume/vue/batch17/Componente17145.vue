<template>
  <section class="panel-17145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17145");
const base = ref(17145);
const total = computed(() => base.value * 2);

function incrementar17145() {
  base.value++;
}
</script>
