// fichero 45810 -- macros y constantes -- MODIFICADO
#define LIMITE_45810 46010
#define FACTOR_45810 2

int aplicar_limite45810(int valor) {
    if (valor > LIMITE_45810) return LIMITE_45810;
    return valor * FACTOR_45810;
}
