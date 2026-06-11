<template>
  <section class="panel-977">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 977");
const base = ref(977);
const total = computed(() => base.value * 2);

function incrementar977() {
  base.value++;
}
</script>
