<template>
  <section class="panel-27349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27349");
const base = ref(27349);
const total = computed(() => base.value * 2);

function incrementar27349() {
  base.value++;
}
</script>
