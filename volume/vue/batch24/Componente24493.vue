<template>
  <section class="panel-24493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24493");
const base = ref(24493);
const total = computed(() => base.value * 2);

function incrementar24493() {
  base.value++;
}
</script>
