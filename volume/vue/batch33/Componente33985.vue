<template>
  <section class="panel-33985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33985");
const base = ref(33985);
const total = computed(() => base.value * 2);

function incrementar33985() {
  base.value++;
}
</script>
