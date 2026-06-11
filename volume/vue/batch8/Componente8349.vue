<template>
  <section class="panel-8349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8349");
const base = ref(8349);
const total = computed(() => base.value * 2);

function incrementar8349() {
  base.value++;
}
</script>
