<template>
  <section class="panel-2905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2905");
const base = ref(2905);
const total = computed(() => base.value * 2);

function incrementar2905() {
  base.value++;
}
</script>
