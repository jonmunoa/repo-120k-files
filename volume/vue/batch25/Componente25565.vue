<template>
  <section class="panel-25565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25565");
const base = ref(25565);
const total = computed(() => base.value * 2);

function incrementar25565() {
  base.value++;
}
</script>
