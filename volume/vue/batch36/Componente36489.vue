<template>
  <section class="panel-36489">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36489");
const base = ref(36489);
const total = computed(() => base.value * 2);

function incrementar36489() {
  base.value++;
}
</script>
