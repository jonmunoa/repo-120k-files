// fichero 19098 -- macros y constantes -- MODIFICADO
#define LIMITE_19098 19298
#define FACTOR_19098 5

int aplicar_limite19098(int valor) {
    if (valor > LIMITE_19098) return LIMITE_19098;
    return valor * FACTOR_19098;
}
