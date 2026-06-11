<template>
  <section class="panel-20181">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20181");
const base = ref(20181);
const total = computed(() => base.value * 2);

function incrementar20181() {
  base.value++;
}
</script>
