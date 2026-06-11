<template>
  <section class="panel-18985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18985");
const base = ref(18985);
const total = computed(() => base.value * 2);

function incrementar18985() {
  base.value++;
}
</script>
