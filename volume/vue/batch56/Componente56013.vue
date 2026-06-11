<template>
  <section class="panel-56013">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56013");
const base = ref(56013);
const total = computed(() => base.value * 2);

function incrementar56013() {
  base.value++;
}
</script>
