<template>
  <section class="panel-25985">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25985");
const base = ref(25985);
const total = computed(() => base.value * 2);

function incrementar25985() {
  base.value++;
}
</script>
