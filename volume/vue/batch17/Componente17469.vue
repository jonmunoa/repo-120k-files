<template>
  <section class="panel-17469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17469");
const base = ref(17469);
const total = computed(() => base.value * 2);

function incrementar17469() {
  base.value++;
}
</script>
