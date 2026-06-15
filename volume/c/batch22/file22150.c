// fichero 22150 -- macros y constantes -- MODIFICADO
#define LIMITE_22150 22350
#define FACTOR_22150 2

int aplicar_limite22150(int valor) {
    if (valor > LIMITE_22150) return LIMITE_22150;
    return valor * FACTOR_22150;
}
