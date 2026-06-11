<template>
  <section class="panel-40245">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40245");
const base = ref(40245);
const total = computed(() => base.value * 2);

function incrementar40245() {
  base.value++;
}
</script>
