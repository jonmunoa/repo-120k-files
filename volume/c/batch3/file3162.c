// fichero 3162 -- macros y constantes
#define LIMITE_3162 3262
#define FACTOR_3162 3

int aplicar_limite3162(int valor) {
    if (valor > LIMITE_3162) return LIMITE_3162;
    return valor * FACTOR_3162;
}
