<template>
  <section class="panel-13649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13649");
const base = ref(13649);
const total = computed(() => base.value * 2);

function incrementar13649() {
  base.value++;
}
</script>
