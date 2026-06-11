<template>
  <section class="panel-21877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21877");
const base = ref(21877);
const total = computed(() => base.value * 2);

function incrementar21877() {
  base.value++;
}
</script>
