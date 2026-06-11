<template>
  <section class="panel-34533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34533");
const base = ref(34533);
const total = computed(() => base.value * 2);

function incrementar34533() {
  base.value++;
}
</script>
