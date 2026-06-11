<template>
  <section class="panel-6589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6589");
const base = ref(6589);
const total = computed(() => base.value * 2);

function incrementar6589() {
  base.value++;
}
</script>
