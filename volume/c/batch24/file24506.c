// fichero 24506 -- macros y constantes
#define LIMITE_24506 24606
#define FACTOR_24506 2

int aplicar_limite24506(int valor) {
    if (valor > LIMITE_24506) return LIMITE_24506;
    return valor * FACTOR_24506;
}
