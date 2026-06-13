// fichero 40970 -- macros y constantes
#define LIMITE_40970 41070
#define FACTOR_40970 1

int aplicar_limite40970(int valor) {
    if (valor > LIMITE_40970) return LIMITE_40970;
    return valor * FACTOR_40970;
}
