<template>
  <section class="panel-6869">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6869");
const base = ref(6869);
const total = computed(() => base.value * 2);

function incrementar6869() {
  base.value++;
}
</script>
