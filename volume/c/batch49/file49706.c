// fichero 49706 -- macros y constantes -- MODIFICADO
#define LIMITE_49706 49906
#define FACTOR_49706 3

int aplicar_limite49706(int valor) {
    if (valor > LIMITE_49706) return LIMITE_49706;
    return valor * FACTOR_49706;
}
