// fichero 21958 -- macros y constantes
#define LIMITE_21958 22058
#define FACTOR_21958 4

int aplicar_limite21958(int valor) {
    if (valor > LIMITE_21958) return LIMITE_21958;
    return valor * FACTOR_21958;
}
