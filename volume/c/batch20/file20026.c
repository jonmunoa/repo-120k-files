// fichero 20026 -- macros y constantes -- MODIFICADO
#define LIMITE_20026 20226
#define FACTOR_20026 3

int aplicar_limite20026(int valor) {
    if (valor > LIMITE_20026) return LIMITE_20026;
    return valor * FACTOR_20026;
}
