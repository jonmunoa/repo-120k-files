<template>
  <section class="panel-16349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16349");
const base = ref(16349);
const total = computed(() => base.value * 2);

function incrementar16349() {
  base.value++;
}
</script>
