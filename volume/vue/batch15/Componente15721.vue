<template>
  <section class="panel-15721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15721");
const base = ref(15721);
const total = computed(() => base.value * 2);

function incrementar15721() {
  base.value++;
}
</script>
