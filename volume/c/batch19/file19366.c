// fichero 19366 -- macros y constantes
#define LIMITE_19366 19466
#define FACTOR_19366 2

int aplicar_limite19366(int valor) {
    if (valor > LIMITE_19366) return LIMITE_19366;
    return valor * FACTOR_19366;
}
