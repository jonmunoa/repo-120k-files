<template>
  <section class="panel-40661">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40661");
const base = ref(40661);
const total = computed(() => base.value * 2);

function incrementar40661() {
  base.value++;
}
</script>
