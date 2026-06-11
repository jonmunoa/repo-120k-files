<template>
  <section class="panel-24349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24349");
const base = ref(24349);
const total = computed(() => base.value * 2);

function incrementar24349() {
  base.value++;
}
</script>
