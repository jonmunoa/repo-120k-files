<template>
  <section class="panel-51089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51089");
const base = ref(51089);
const total = computed(() => base.value * 2);

function incrementar51089() {
  base.value++;
}
</script>
