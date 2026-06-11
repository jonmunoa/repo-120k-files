<template>
  <section class="panel-18097">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18097");
const base = ref(18097);
const total = computed(() => base.value * 2);

function incrementar18097() {
  base.value++;
}
</script>
