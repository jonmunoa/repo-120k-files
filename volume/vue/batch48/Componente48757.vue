<template>
  <section class="panel-48757">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48757");
const base = ref(48757);
const total = computed(() => base.value * 2);

function incrementar48757() {
  base.value++;
}
</script>
