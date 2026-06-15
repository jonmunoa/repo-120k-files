// fichero 36098 -- macros y constantes -- MODIFICADO
#define LIMITE_36098 36298
#define FACTOR_36098 5

int aplicar_limite36098(int valor) {
    if (valor > LIMITE_36098) return LIMITE_36098;
    return valor * FACTOR_36098;
}
