<template>
  <section class="panel-50985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50985");
const base = ref(50985);
const total = computed(() => base.value * 2);

function incrementar50985() {
  base.value++;
}
</script>
