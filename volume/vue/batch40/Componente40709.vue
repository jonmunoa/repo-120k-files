<template>
  <section class="panel-40709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40709");
const base = ref(40709);
const total = computed(() => base.value * 2);

function incrementar40709() {
  base.value++;
}
</script>
