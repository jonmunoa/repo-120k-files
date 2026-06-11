<template>
  <section class="panel-47885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47885");
const base = ref(47885);
const total = computed(() => base.value * 2);

function incrementar47885() {
  base.value++;
}
</script>
