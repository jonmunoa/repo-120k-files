<template>
  <section class="panel-36653">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36653");
const base = ref(36653);
const total = computed(() => base.value * 2);

function incrementar36653() {
  base.value++;
}
</script>
