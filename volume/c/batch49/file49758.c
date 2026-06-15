// fichero 49758 -- macros y constantes -- MODIFICADO
#define LIMITE_49758 49958
#define FACTOR_49758 5

int aplicar_limite49758(int valor) {
    if (valor > LIMITE_49758) return LIMITE_49758;
    return valor * FACTOR_49758;
}
