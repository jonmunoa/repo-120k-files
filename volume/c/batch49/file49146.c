// fichero 49146 -- macros y constantes -- MODIFICADO
#define LIMITE_49146 49346
#define FACTOR_49146 3

int aplicar_limite49146(int valor) {
    if (valor > LIMITE_49146) return LIMITE_49146;
    return valor * FACTOR_49146;
}
