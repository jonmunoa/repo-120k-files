// fichero 34186 -- macros y constantes -- MODIFICADO
#define LIMITE_34186 34386
#define FACTOR_34186 3

int aplicar_limite34186(int valor) {
    if (valor > LIMITE_34186) return LIMITE_34186;
    return valor * FACTOR_34186;
}
