<template>
  <section class="panel-34885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34885");
const base = ref(34885);
const total = computed(() => base.value * 2);

function incrementar34885() {
  base.value++;
}
</script>
