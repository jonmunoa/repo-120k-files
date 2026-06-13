// fichero 54502 -- macros y constantes
#define LIMITE_54502 54602
#define FACTOR_54502 3

int aplicar_limite54502(int valor) {
    if (valor > LIMITE_54502) return LIMITE_54502;
    return valor * FACTOR_54502;
}
