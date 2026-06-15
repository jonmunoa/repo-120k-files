// fichero 10098 -- macros y constantes -- MODIFICADO
#define LIMITE_10098 10298
#define FACTOR_10098 5

int aplicar_limite10098(int valor) {
    if (valor > LIMITE_10098) return LIMITE_10098;
    return valor * FACTOR_10098;
}
