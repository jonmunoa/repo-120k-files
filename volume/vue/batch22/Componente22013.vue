<template>
  <section class="panel-22013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22013");
const base = ref(22013);
const total = computed(() => base.value * 2);

function incrementar22013() {
  base.value++;
}
</script>
