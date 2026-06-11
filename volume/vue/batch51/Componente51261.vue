<template>
  <section class="panel-51261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51261");
const base = ref(51261);
const total = computed(() => base.value * 2);

function incrementar51261() {
  base.value++;
}
</script>
