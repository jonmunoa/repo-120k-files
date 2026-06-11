<template>
  <section class="panel-48985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48985");
const base = ref(48985);
const total = computed(() => base.value * 2);

function incrementar48985() {
  base.value++;
}
</script>
