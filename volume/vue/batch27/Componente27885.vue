<template>
  <section class="panel-27885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27885");
const base = ref(27885);
const total = computed(() => base.value * 2);

function incrementar27885() {
  base.value++;
}
</script>
