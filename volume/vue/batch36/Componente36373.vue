<template>
  <section class="panel-36373">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36373");
const base = ref(36373);
const total = computed(() => base.value * 2);

function incrementar36373() {
  base.value++;
}
</script>
