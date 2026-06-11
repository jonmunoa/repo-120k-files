<template>
  <section class="panel-51985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51985");
const base = ref(51985);
const total = computed(() => base.value * 2);

function incrementar51985() {
  base.value++;
}
</script>
