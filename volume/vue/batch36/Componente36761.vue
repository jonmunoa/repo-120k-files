<template>
  <section class="panel-36761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36761");
const base = ref(36761);
const total = computed(() => base.value * 2);

function incrementar36761() {
  base.value++;
}
</script>
