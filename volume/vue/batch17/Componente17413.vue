<template>
  <section class="panel-17413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17413");
const base = ref(17413);
const total = computed(() => base.value * 2);

function incrementar17413() {
  base.value++;
}
</script>
