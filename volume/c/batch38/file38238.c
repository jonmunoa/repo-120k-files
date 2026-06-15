// fichero 38238 -- macros y constantes -- MODIFICADO
#define LIMITE_38238 38438
#define FACTOR_38238 5

int aplicar_limite38238(int valor) {
    if (valor > LIMITE_38238) return LIMITE_38238;
    return valor * FACTOR_38238;
}
