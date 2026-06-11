<template>
  <section class="panel-37349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37349");
const base = ref(37349);
const total = computed(() => base.value * 2);

function incrementar37349() {
  base.value++;
}
</script>
