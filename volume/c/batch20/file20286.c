// fichero 20286 -- macros y constantes -- MODIFICADO
#define LIMITE_20286 20486
#define FACTOR_20286 3

int aplicar_limite20286(int valor) {
    if (valor > LIMITE_20286) return LIMITE_20286;
    return valor * FACTOR_20286;
}
