<template>
  <section class="panel-7773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7773");
const base = ref(7773);
const total = computed(() => base.value * 2);

function incrementar7773() {
  base.value++;
}
</script>
