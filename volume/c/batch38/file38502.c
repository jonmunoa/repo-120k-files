// fichero 38502 -- macros y constantes -- MODIFICADO
#define LIMITE_38502 38702
#define FACTOR_38502 4

int aplicar_limite38502(int valor) {
    if (valor > LIMITE_38502) return LIMITE_38502;
    return valor * FACTOR_38502;
}
