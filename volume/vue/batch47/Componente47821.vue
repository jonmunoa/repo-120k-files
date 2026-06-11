<template>
  <section class="panel-47821">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 47821");
const base = ref(47821);
const total = computed(() => base.value * 2);

function incrementar47821() {
  base.value++;
}
</script>
