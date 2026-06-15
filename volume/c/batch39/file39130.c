// fichero 39130 -- macros y constantes -- MODIFICADO
#define LIMITE_39130 39330
#define FACTOR_39130 2

int aplicar_limite39130(int valor) {
    if (valor > LIMITE_39130) return LIMITE_39130;
    return valor * FACTOR_39130;
}
