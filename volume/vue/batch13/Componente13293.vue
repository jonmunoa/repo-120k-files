<template>
  <section class="panel-13293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13293");
const base = ref(13293);
const total = computed(() => base.value * 2);

function incrementar13293() {
  base.value++;
}
</script>
