// fichero 94 -- macros y constantes -- MODIFICADO
#define LIMITE_94 294
#define FACTOR_94 6

int aplicar_limite94(int valor) {
    if (valor > LIMITE_94) return LIMITE_94;
    return valor * FACTOR_94;
}
