<template>
  <section class="panel-40293">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40293");
const base = ref(40293);
const total = computed(() => base.value * 2);

function incrementar40293() {
  base.value++;
}
</script>
