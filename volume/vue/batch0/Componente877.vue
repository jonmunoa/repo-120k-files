<template>
  <section class="panel-877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 877");
const base = ref(877);
const total = computed(() => base.value * 2);

function incrementar877() {
  base.value++;
}
</script>
