// fichero 21258 -- macros y constantes -- MODIFICADO
#define LIMITE_21258 21458
#define FACTOR_21258 5

int aplicar_limite21258(int valor) {
    if (valor > LIMITE_21258) return LIMITE_21258;
    return valor * FACTOR_21258;
}
