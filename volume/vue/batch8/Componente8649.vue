<template>
  <section class="panel-8649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8649");
const base = ref(8649);
const total = computed(() => base.value * 2);

function incrementar8649() {
  base.value++;
}
</script>
