<template>
  <section class="panel-26273">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 26273");
const base = ref(26273);
const total = computed(() => base.value * 2);

function incrementar26273() {
  base.value++;
}
</script>
