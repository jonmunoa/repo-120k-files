<template>
  <section class="panel-25493">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25493");
const base = ref(25493);
const total = computed(() => base.value * 2);

function incrementar25493() {
  base.value++;
}
</script>
