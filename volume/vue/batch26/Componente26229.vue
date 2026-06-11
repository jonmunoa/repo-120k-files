<template>
  <section class="panel-26229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26229");
const base = ref(26229);
const total = computed(() => base.value * 2);

function incrementar26229() {
  base.value++;
}
</script>
