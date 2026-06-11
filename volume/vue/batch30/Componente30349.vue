<template>
  <section class="panel-30349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30349");
const base = ref(30349);
const total = computed(() => base.value * 2);

function incrementar30349() {
  base.value++;
}
</script>
