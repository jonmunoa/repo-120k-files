<template>
  <section class="panel-44773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44773");
const base = ref(44773);
const total = computed(() => base.value * 2);

function incrementar44773() {
  base.value++;
}
</script>
