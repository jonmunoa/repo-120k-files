<template>
  <section class="panel-38493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38493");
const base = ref(38493);
const total = computed(() => base.value * 2);

function incrementar38493() {
  base.value++;
}
</script>
