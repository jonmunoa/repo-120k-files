<template>
  <section class="panel-32985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32985");
const base = ref(32985);
const total = computed(() => base.value * 2);

function incrementar32985() {
  base.value++;
}
</script>
