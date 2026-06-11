<template>
  <section class="panel-14761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14761");
const base = ref(14761);
const total = computed(() => base.value * 2);

function incrementar14761() {
  base.value++;
}
</script>
