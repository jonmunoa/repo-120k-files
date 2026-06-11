<template>
  <section class="panel-13837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13837");
const base = ref(13837);
const total = computed(() => base.value * 2);

function incrementar13837() {
  base.value++;
}
</script>
