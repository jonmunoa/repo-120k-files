<template>
  <section class="panel-11089">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11089");
const base = ref(11089);
const total = computed(() => base.value * 2);

function incrementar11089() {
  base.value++;
}
</script>
