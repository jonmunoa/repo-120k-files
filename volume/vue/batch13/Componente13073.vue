<template>
  <section class="panel-13073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13073");
const base = ref(13073);
const total = computed(() => base.value * 2);

function incrementar13073() {
  base.value++;
}
</script>
