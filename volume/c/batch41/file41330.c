// fichero 41330 -- macros y constantes -- MODIFICADO
#define LIMITE_41330 41530
#define FACTOR_41330 2

int aplicar_limite41330(int valor) {
    if (valor > LIMITE_41330) return LIMITE_41330;
    return valor * FACTOR_41330;
}
