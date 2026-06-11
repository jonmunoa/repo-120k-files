<template>
  <section class="panel-33877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33877");
const base = ref(33877);
const total = computed(() => base.value * 2);

function incrementar33877() {
  base.value++;
}
</script>
