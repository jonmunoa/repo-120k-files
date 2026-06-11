<template>
  <section class="panel-8217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8217");
const base = ref(8217);
const total = computed(() => base.value * 2);

function incrementar8217() {
  base.value++;
}
</script>
