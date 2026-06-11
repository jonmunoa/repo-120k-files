<template>
  <section class="panel-17281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17281");
const base = ref(17281);
const total = computed(() => base.value * 2);

function incrementar17281() {
  base.value++;
}
</script>
