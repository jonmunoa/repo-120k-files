<template>
  <section class="panel-13657">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13657");
const base = ref(13657);
const total = computed(() => base.value * 2);

function incrementar13657() {
  base.value++;
}
</script>
