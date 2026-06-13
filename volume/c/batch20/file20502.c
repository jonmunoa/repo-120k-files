// fichero 20502 -- macros y constantes
#define LIMITE_20502 20602
#define FACTOR_20502 3

int aplicar_limite20502(int valor) {
    if (valor > LIMITE_20502) return LIMITE_20502;
    return valor * FACTOR_20502;
}
