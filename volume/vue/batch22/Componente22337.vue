<template>
  <section class="panel-22337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22337");
const base = ref(22337);
const total = computed(() => base.value * 2);

function incrementar22337() {
  base.value++;
}
</script>
