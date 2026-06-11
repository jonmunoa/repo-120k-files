<template>
  <section class="panel-21849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21849");
const base = ref(21849);
const total = computed(() => base.value * 2);

function incrementar21849() {
  base.value++;
}
</script>
