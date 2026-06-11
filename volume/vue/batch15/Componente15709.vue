<template>
  <section class="panel-15709">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15709");
const base = ref(15709);
const total = computed(() => base.value * 2);

function incrementar15709() {
  base.value++;
}
</script>
