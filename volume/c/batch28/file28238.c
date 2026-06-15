// fichero 28238 -- macros y constantes -- MODIFICADO
#define LIMITE_28238 28438
#define FACTOR_28238 5

int aplicar_limite28238(int valor) {
    if (valor > LIMITE_28238) return LIMITE_28238;
    return valor * FACTOR_28238;
}
