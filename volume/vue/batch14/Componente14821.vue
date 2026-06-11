<template>
  <section class="panel-14821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14821");
const base = ref(14821);
const total = computed(() => base.value * 2);

function incrementar14821() {
  base.value++;
}
</script>
