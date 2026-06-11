<template>
  <section class="panel-22865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22865");
const base = ref(22865);
const total = computed(() => base.value * 2);

function incrementar22865() {
  base.value++;
}
</script>
