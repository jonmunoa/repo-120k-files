// fichero 46458 -- macros y constantes -- MODIFICADO
#define LIMITE_46458 46658
#define FACTOR_46458 5

int aplicar_limite46458(int valor) {
    if (valor > LIMITE_46458) return LIMITE_46458;
    return valor * FACTOR_46458;
}
