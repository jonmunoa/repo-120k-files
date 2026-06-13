// fichero 29154 -- macros y constantes
#define LIMITE_29154 29254
#define FACTOR_29154 5

int aplicar_limite29154(int valor) {
    if (valor > LIMITE_29154) return LIMITE_29154;
    return valor * FACTOR_29154;
}
