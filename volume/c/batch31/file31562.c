// fichero 31562 -- macros y constantes -- MODIFICADO
#define LIMITE_31562 31762
#define FACTOR_31562 4

int aplicar_limite31562(int valor) {
    if (valor > LIMITE_31562) return LIMITE_31562;
    return valor * FACTOR_31562;
}
