<template>
  <section class="panel-17349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17349");
const base = ref(17349);
const total = computed(() => base.value * 2);

function incrementar17349() {
  base.value++;
}
</script>
