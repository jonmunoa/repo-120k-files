<template>
  <section class="panel-10501">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10501");
const base = ref(10501);
const total = computed(() => base.value * 2);

function incrementar10501() {
  base.value++;
}
</script>
