// fichero 47426 -- macros y constantes -- MODIFICADO
#define LIMITE_47426 47626
#define FACTOR_47426 3

int aplicar_limite47426(int valor) {
    if (valor > LIMITE_47426) return LIMITE_47426;
    return valor * FACTOR_47426;
}
