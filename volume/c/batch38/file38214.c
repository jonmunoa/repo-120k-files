// fichero 38214 -- macros y constantes
#define LIMITE_38214 38314
#define FACTOR_38214 5

int aplicar_limite38214(int valor) {
    if (valor > LIMITE_38214) return LIMITE_38214;
    return valor * FACTOR_38214;
}
