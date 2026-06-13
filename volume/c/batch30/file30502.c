// fichero 30502 -- macros y constantes
#define LIMITE_30502 30602
#define FACTOR_30502 3

int aplicar_limite30502(int valor) {
    if (valor > LIMITE_30502) return LIMITE_30502;
    return valor * FACTOR_30502;
}
