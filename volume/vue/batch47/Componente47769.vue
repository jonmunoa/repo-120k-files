<template>
  <section class="panel-47769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47769");
const base = ref(47769);
const total = computed(() => base.value * 2);

function incrementar47769() {
  base.value++;
}
</script>
