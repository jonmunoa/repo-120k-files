// fichero 50 -- macros y constantes -- MODIFICADO
#define LIMITE_50 250
#define FACTOR_50 2

int aplicar_limite50(int valor) {
    if (valor > LIMITE_50) return LIMITE_50;
    return valor * FACTOR_50;
}
