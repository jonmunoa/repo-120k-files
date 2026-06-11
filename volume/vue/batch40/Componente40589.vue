<template>
  <section class="panel-40589">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40589");
const base = ref(40589);
const total = computed(() => base.value * 2);

function incrementar40589() {
  base.value++;
}
</script>
