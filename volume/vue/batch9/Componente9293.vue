<template>
  <section class="panel-9293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9293");
const base = ref(9293);
const total = computed(() => base.value * 2);

function incrementar9293() {
  base.value++;
}
</script>
