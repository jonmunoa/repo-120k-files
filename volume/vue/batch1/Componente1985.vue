<template>
  <section class="panel-1985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1985");
const base = ref(1985);
const total = computed(() => base.value * 2);

function incrementar1985() {
  base.value++;
}
</script>
