<template>
  <section class="panel-27905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27905");
const base = ref(27905);
const total = computed(() => base.value * 2);

function incrementar27905() {
  base.value++;
}
</script>
