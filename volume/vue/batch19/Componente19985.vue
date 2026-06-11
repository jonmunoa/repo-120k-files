<template>
  <section class="panel-19985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19985");
const base = ref(19985);
const total = computed(() => base.value * 2);

function incrementar19985() {
  base.value++;
}
</script>
