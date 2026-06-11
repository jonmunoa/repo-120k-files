<template>
  <section class="panel-51393">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51393");
const base = ref(51393);
const total = computed(() => base.value * 2);

function incrementar51393() {
  base.value++;
}
</script>
