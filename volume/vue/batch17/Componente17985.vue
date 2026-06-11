<template>
  <section class="panel-17985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17985");
const base = ref(17985);
const total = computed(() => base.value * 2);

function incrementar17985() {
  base.value++;
}
</script>
