<template>
  <section class="panel-40713">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40713");
const base = ref(40713);
const total = computed(() => base.value * 2);

function incrementar40713() {
  base.value++;
}
</script>
