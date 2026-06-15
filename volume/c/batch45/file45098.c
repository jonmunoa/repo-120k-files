// fichero 45098 -- macros y constantes -- MODIFICADO
#define LIMITE_45098 45298
#define FACTOR_45098 5

int aplicar_limite45098(int valor) {
    if (valor > LIMITE_45098) return LIMITE_45098;
    return valor * FACTOR_45098;
}
