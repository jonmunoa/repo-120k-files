<template>
  <section class="panel-13061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13061");
const base = ref(13061);
const total = computed(() => base.value * 2);

function incrementar13061() {
  base.value++;
}
</script>
