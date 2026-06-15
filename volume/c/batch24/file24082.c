// fichero 24082 -- macros y constantes -- MODIFICADO
#define LIMITE_24082 24282
#define FACTOR_24082 4

int aplicar_limite24082(int valor) {
    if (valor > LIMITE_24082) return LIMITE_24082;
    return valor * FACTOR_24082;
}
