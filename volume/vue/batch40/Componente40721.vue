<template>
  <section class="panel-40721">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40721");
const base = ref(40721);
const total = computed(() => base.value * 2);

function incrementar40721() {
  base.value++;
}
</script>
