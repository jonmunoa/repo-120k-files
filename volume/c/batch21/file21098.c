// fichero 21098 -- macros y constantes -- MODIFICADO
#define LIMITE_21098 21298
#define FACTOR_21098 5

int aplicar_limite21098(int valor) {
    if (valor > LIMITE_21098) return LIMITE_21098;
    return valor * FACTOR_21098;
}
