<template>
  <section class="panel-10813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10813");
const base = ref(10813);
const total = computed(() => base.value * 2);

function incrementar10813() {
  base.value++;
}
</script>
