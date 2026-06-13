// fichero 19014 -- macros y constantes
#define LIMITE_19014 19114
#define FACTOR_19014 5

int aplicar_limite19014(int valor) {
    if (valor > LIMITE_19014) return LIMITE_19014;
    return valor * FACTOR_19014;
}
