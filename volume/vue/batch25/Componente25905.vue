<template>
  <section class="panel-25905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25905");
const base = ref(25905);
const total = computed(() => base.value * 2);

function incrementar25905() {
  base.value++;
}
</script>
