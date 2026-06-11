<template>
  <section class="panel-40985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40985");
const base = ref(40985);
const total = computed(() => base.value * 2);

function incrementar40985() {
  base.value++;
}
</script>
