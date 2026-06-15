// fichero 11650 -- macros y constantes -- MODIFICADO
#define LIMITE_11650 11850
#define FACTOR_11650 2

int aplicar_limite11650(int valor) {
    if (valor > LIMITE_11650) return LIMITE_11650;
    return valor * FACTOR_11650;
}
