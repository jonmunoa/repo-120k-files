// fichero 39202 -- macros y constantes -- MODIFICADO
#define LIMITE_39202 39402
#define FACTOR_39202 4

int aplicar_limite39202(int valor) {
    if (valor > LIMITE_39202) return LIMITE_39202;
    return valor * FACTOR_39202;
}
