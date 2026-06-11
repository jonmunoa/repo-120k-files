<template>
  <section class="panel-13117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13117");
const base = ref(13117);
const total = computed(() => base.value * 2);

function incrementar13117() {
  base.value++;
}
</script>
