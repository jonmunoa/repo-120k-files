// fichero 48958 -- macros y constantes
#define LIMITE_48958 49058
#define FACTOR_48958 4

int aplicar_limite48958(int valor) {
    if (valor > LIMITE_48958) return LIMITE_48958;
    return valor * FACTOR_48958;
}
