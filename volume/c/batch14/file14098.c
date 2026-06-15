// fichero 14098 -- macros y constantes -- MODIFICADO
#define LIMITE_14098 14298
#define FACTOR_14098 5

int aplicar_limite14098(int valor) {
    if (valor > LIMITE_14098) return LIMITE_14098;
    return valor * FACTOR_14098;
}
