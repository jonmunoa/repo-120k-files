<template>
  <section class="panel-50829">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50829");
const base = ref(50829);
const total = computed(() => base.value * 2);

function incrementar50829() {
  base.value++;
}
</script>
