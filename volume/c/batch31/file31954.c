// fichero 31954 -- macros y constantes -- MODIFICADO
#define LIMITE_31954 32154
#define FACTOR_31954 6

int aplicar_limite31954(int valor) {
    if (valor > LIMITE_31954) return LIMITE_31954;
    return valor * FACTOR_31954;
}
