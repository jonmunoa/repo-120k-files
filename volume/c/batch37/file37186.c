// fichero 37186 -- macros y constantes -- MODIFICADO
#define LIMITE_37186 37386
#define FACTOR_37186 3

int aplicar_limite37186(int valor) {
    if (valor > LIMITE_37186) return LIMITE_37186;
    return valor * FACTOR_37186;
}
