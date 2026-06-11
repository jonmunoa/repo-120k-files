<template>
  <section class="panel-55325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55325");
const base = ref(55325);
const total = computed(() => base.value * 2);

function incrementar55325() {
  base.value++;
}
</script>
