<template>
  <section class="panel-14349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14349");
const base = ref(14349);
const total = computed(() => base.value * 2);

function incrementar14349() {
  base.value++;
}
</script>
