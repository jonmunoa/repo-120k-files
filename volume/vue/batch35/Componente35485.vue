<template>
  <section class="panel-35485">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35485");
const base = ref(35485);
const total = computed(() => base.value * 2);

function incrementar35485() {
  base.value++;
}
</script>
