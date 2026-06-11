<template>
  <section class="panel-35757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35757");
const base = ref(35757);
const total = computed(() => base.value * 2);

function incrementar35757() {
  base.value++;
}
</script>
