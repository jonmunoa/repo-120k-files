<template>
  <section class="panel-13457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13457");
const base = ref(13457);
const total = computed(() => base.value * 2);

function incrementar13457() {
  base.value++;
}
</script>
