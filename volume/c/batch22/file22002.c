// fichero 22002 -- macros y constantes -- MODIFICADO
#define LIMITE_22002 22202
#define FACTOR_22002 4

int aplicar_limite22002(int valor) {
    if (valor > LIMITE_22002) return LIMITE_22002;
    return valor * FACTOR_22002;
}
