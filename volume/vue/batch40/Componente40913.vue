<template>
  <section class="panel-40913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40913");
const base = ref(40913);
const total = computed(() => base.value * 2);

function incrementar40913() {
  base.value++;
}
</script>
