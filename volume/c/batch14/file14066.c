// fichero 14066 -- macros y constantes -- MODIFICADO
#define LIMITE_14066 14266
#define FACTOR_14066 3

int aplicar_limite14066(int valor) {
    if (valor > LIMITE_14066) return LIMITE_14066;
    return valor * FACTOR_14066;
}
