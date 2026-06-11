<template>
  <section class="panel-50897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50897");
const base = ref(50897);
const total = computed(() => base.value * 2);

function incrementar50897() {
  base.value++;
}
</script>
