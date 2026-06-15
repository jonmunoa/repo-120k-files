// fichero 14506 -- macros y constantes -- MODIFICADO
#define LIMITE_14506 14706
#define FACTOR_14506 3

int aplicar_limite14506(int valor) {
    if (valor > LIMITE_14506) return LIMITE_14506;
    return valor * FACTOR_14506;
}
