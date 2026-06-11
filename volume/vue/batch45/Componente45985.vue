<template>
  <section class="panel-45985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45985");
const base = ref(45985);
const total = computed(() => base.value * 2);

function incrementar45985() {
  base.value++;
}
</script>
