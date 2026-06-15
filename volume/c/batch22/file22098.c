// fichero 22098 -- macros y constantes -- MODIFICADO
#define LIMITE_22098 22298
#define FACTOR_22098 5

int aplicar_limite22098(int valor) {
    if (valor > LIMITE_22098) return LIMITE_22098;
    return valor * FACTOR_22098;
}
