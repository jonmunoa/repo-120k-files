<template>
  <section class="panel-40577">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40577");
const base = ref(40577);
const total = computed(() => base.value * 2);

function incrementar40577() {
  base.value++;
}
</script>
