<template>
  <section class="panel-8985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8985");
const base = ref(8985);
const total = computed(() => base.value * 2);

function incrementar8985() {
  base.value++;
}
</script>
