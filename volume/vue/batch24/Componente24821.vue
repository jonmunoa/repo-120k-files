<template>
  <section class="panel-24821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24821");
const base = ref(24821);
const total = computed(() => base.value * 2);

function incrementar24821() {
  base.value++;
}
</script>
