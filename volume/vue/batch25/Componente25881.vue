<template>
  <section class="panel-25881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25881");
const base = ref(25881);
const total = computed(() => base.value * 2);

function incrementar25881() {
  base.value++;
}
</script>
