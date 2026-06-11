<template>
  <section class="panel-13509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13509");
const base = ref(13509);
const total = computed(() => base.value * 2);

function incrementar13509() {
  base.value++;
}
</script>
