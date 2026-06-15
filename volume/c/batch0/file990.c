// fichero 990 -- macros y constantes -- MODIFICADO
#define LIMITE_990 1190
#define FACTOR_990 2

int aplicar_limite990(int valor) {
    if (valor > LIMITE_990) return LIMITE_990;
    return valor * FACTOR_990;
}
