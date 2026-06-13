// fichero 14506 -- macros y constantes
#define LIMITE_14506 14606
#define FACTOR_14506 2

int aplicar_limite14506(int valor) {
    if (valor > LIMITE_14506) return LIMITE_14506;
    return valor * FACTOR_14506;
}
