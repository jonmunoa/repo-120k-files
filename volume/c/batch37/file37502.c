// fichero 37502 -- macros y constantes
#define LIMITE_37502 37602
#define FACTOR_37502 3

int aplicar_limite37502(int valor) {
    if (valor > LIMITE_37502) return LIMITE_37502;
    return valor * FACTOR_37502;
}
