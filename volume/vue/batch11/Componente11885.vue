<template>
  <section class="panel-11885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11885");
const base = ref(11885);
const total = computed(() => base.value * 2);

function incrementar11885() {
  base.value++;
}
</script>
