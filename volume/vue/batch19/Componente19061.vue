<template>
  <section class="panel-19061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19061");
const base = ref(19061);
const total = computed(() => base.value * 2);

function incrementar19061() {
  base.value++;
}
</script>
