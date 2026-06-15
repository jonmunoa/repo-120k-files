// fichero 31330 -- macros y constantes -- MODIFICADO
#define LIMITE_31330 31530
#define FACTOR_31330 2

int aplicar_limite31330(int valor) {
    if (valor > LIMITE_31330) return LIMITE_31330;
    return valor * FACTOR_31330;
}
