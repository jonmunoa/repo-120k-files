<template>
  <section class="panel-2349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2349");
const base = ref(2349);
const total = computed(() => base.value * 2);

function incrementar2349() {
  base.value++;
}
</script>
