<template>
  <section class="panel-40261">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40261");
const base = ref(40261);
const total = computed(() => base.value * 2);

function incrementar40261() {
  base.value++;
}
</script>
