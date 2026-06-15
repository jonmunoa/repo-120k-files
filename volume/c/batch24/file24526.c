// fichero 24526 -- macros y constantes -- MODIFICADO
#define LIMITE_24526 24726
#define FACTOR_24526 3

int aplicar_limite24526(int valor) {
    if (valor > LIMITE_24526) return LIMITE_24526;
    return valor * FACTOR_24526;
}
