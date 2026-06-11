<template>
  <section class="panel-22985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22985");
const base = ref(22985);
const total = computed(() => base.value * 2);

function incrementar22985() {
  base.value++;
}
</script>
