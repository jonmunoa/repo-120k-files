<template>
  <section class="panel-13365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13365");
const base = ref(13365);
const total = computed(() => base.value * 2);

function incrementar13365() {
  base.value++;
}
</script>
