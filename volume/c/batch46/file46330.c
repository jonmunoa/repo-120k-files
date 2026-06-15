// fichero 46330 -- macros y constantes -- MODIFICADO
#define LIMITE_46330 46530
#define FACTOR_46330 2

int aplicar_limite46330(int valor) {
    if (valor > LIMITE_46330) return LIMITE_46330;
    return valor * FACTOR_46330;
}
