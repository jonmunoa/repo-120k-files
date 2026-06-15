// fichero 27902 -- macros y constantes -- MODIFICADO
#define LIMITE_27902 28102
#define FACTOR_27902 4

int aplicar_limite27902(int valor) {
    if (valor > LIMITE_27902) return LIMITE_27902;
    return valor * FACTOR_27902;
}
