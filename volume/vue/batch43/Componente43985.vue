<template>
  <section class="panel-43985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43985");
const base = ref(43985);
const total = computed(() => base.value * 2);

function incrementar43985() {
  base.value++;
}
</script>
