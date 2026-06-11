<template>
  <section class="panel-33349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33349");
const base = ref(33349);
const total = computed(() => base.value * 2);

function incrementar33349() {
  base.value++;
}
</script>
