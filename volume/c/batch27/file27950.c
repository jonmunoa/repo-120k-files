// fichero 27950 -- macros y constantes
#define LIMITE_27950 28050
#define FACTOR_27950 1

int aplicar_limite27950(int valor) {
    if (valor > LIMITE_27950) return LIMITE_27950;
    return valor * FACTOR_27950;
}
