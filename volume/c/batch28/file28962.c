// fichero 28962 -- macros y constantes -- MODIFICADO
#define LIMITE_28962 29162
#define FACTOR_28962 4

int aplicar_limite28962(int valor) {
    if (valor > LIMITE_28962) return LIMITE_28962;
    return valor * FACTOR_28962;
}
