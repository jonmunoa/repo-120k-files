// fichero 16098 -- macros y constantes -- MODIFICADO
#define LIMITE_16098 16298
#define FACTOR_16098 5

int aplicar_limite16098(int valor) {
    if (valor > LIMITE_16098) return LIMITE_16098;
    return valor * FACTOR_16098;
}
