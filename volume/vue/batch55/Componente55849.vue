<template>
  <section class="panel-55849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55849");
const base = ref(55849);
const total = computed(() => base.value * 2);

function incrementar55849() {
  base.value++;
}
</script>
