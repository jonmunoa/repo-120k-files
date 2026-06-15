// fichero 30098 -- macros y constantes -- MODIFICADO
#define LIMITE_30098 30298
#define FACTOR_30098 5

int aplicar_limite30098(int valor) {
    if (valor > LIMITE_30098) return LIMITE_30098;
    return valor * FACTOR_30098;
}
