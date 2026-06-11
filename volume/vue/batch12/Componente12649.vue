<template>
  <section class="panel-12649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12649");
const base = ref(12649);
const total = computed(() => base.value * 2);

function incrementar12649() {
  base.value++;
}
</script>
