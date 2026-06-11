<template>
  <section class="panel-25897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25897");
const base = ref(25897);
const total = computed(() => base.value * 2);

function incrementar25897() {
  base.value++;
}
</script>
