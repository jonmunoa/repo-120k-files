<template>
  <section class="panel-18021">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18021");
const base = ref(18021);
const total = computed(() => base.value * 2);

function incrementar18021() {
  base.value++;
}
</script>
