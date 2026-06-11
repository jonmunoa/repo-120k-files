<template>
  <section class="panel-11349">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11349");
const base = ref(11349);
const total = computed(() => base.value * 2);

function incrementar11349() {
  base.value++;
}
</script>
