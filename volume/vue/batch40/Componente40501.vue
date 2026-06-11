<template>
  <section class="panel-40501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40501");
const base = ref(40501);
const total = computed(() => base.value * 2);

function incrementar40501() {
  base.value++;
}
</script>
