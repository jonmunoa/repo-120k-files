<template>
  <section class="panel-2089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2089");
const base = ref(2089);
const total = computed(() => base.value * 2);

function incrementar2089() {
  base.value++;
}
</script>
