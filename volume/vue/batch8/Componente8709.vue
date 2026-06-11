<template>
  <section class="panel-8709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8709");
const base = ref(8709);
const total = computed(() => base.value * 2);

function incrementar8709() {
  base.value++;
}
</script>
