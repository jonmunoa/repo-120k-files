<template>
  <section class="panel-13977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13977");
const base = ref(13977);
const total = computed(() => base.value * 2);

function incrementar13977() {
  base.value++;
}
</script>
