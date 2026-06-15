// fichero 21502 -- macros y constantes -- MODIFICADO
#define LIMITE_21502 21702
#define FACTOR_21502 4

int aplicar_limite21502(int valor) {
    if (valor > LIMITE_21502) return LIMITE_21502;
    return valor * FACTOR_21502;
}
