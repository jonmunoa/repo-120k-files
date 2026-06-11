<template>
  <section class="panel-11849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11849");
const base = ref(11849);
const total = computed(() => base.value * 2);

function incrementar11849() {
  base.value++;
}
</script>
