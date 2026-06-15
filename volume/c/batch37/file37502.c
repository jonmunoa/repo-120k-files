// fichero 37502 -- macros y constantes -- MODIFICADO
#define LIMITE_37502 37702
#define FACTOR_37502 4

int aplicar_limite37502(int valor) {
    if (valor > LIMITE_37502) return LIMITE_37502;
    return valor * FACTOR_37502;
}
