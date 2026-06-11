<template>
  <section class="panel-40181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40181");
const base = ref(40181);
const total = computed(() => base.value * 2);

function incrementar40181() {
  base.value++;
}
</script>
