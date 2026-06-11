<template>
  <section class="panel-20285">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20285");
const base = ref(20285);
const total = computed(() => base.value * 2);

function incrementar20285() {
  base.value++;
}
</script>
