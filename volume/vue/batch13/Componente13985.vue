<template>
  <section class="panel-13985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13985");
const base = ref(13985);
const total = computed(() => base.value * 2);

function incrementar13985() {
  base.value++;
}
</script>
