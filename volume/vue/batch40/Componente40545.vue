<template>
  <section class="panel-40545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40545");
const base = ref(40545);
const total = computed(() => base.value * 2);

function incrementar40545() {
  base.value++;
}
</script>
