<template>
  <section class="panel-35985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35985");
const base = ref(35985);
const total = computed(() => base.value * 2);

function incrementar35985() {
  base.value++;
}
</script>
