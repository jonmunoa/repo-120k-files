// fichero 14186 -- macros y constantes -- MODIFICADO
#define LIMITE_14186 14386
#define FACTOR_14186 3

int aplicar_limite14186(int valor) {
    if (valor > LIMITE_14186) return LIMITE_14186;
    return valor * FACTOR_14186;
}
