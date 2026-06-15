// fichero 18130 -- macros y constantes -- MODIFICADO
#define LIMITE_18130 18330
#define FACTOR_18130 2

int aplicar_limite18130(int valor) {
    if (valor > LIMITE_18130) return LIMITE_18130;
    return valor * FACTOR_18130;
}
