<template>
  <section class="panel-13337">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13337");
const base = ref(13337);
const total = computed(() => base.value * 2);

function incrementar13337() {
  base.value++;
}
</script>
