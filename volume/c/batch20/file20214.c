// fichero 20214 -- macros y constantes -- MODIFICADO
#define LIMITE_20214 20414
#define FACTOR_20214 6

int aplicar_limite20214(int valor) {
    if (valor > LIMITE_20214) return LIMITE_20214;
    return valor * FACTOR_20214;
}
