// fichero 23506 -- macros y constantes
#define LIMITE_23506 23606
#define FACTOR_23506 2

int aplicar_limite23506(int valor) {
    if (valor > LIMITE_23506) return LIMITE_23506;
    return valor * FACTOR_23506;
}
