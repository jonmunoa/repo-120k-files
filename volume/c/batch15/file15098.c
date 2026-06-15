// fichero 15098 -- macros y constantes -- MODIFICADO
#define LIMITE_15098 15298
#define FACTOR_15098 5

int aplicar_limite15098(int valor) {
    if (valor > LIMITE_15098) return LIMITE_15098;
    return valor * FACTOR_15098;
}
