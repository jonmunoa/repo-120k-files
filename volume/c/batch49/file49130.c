// fichero 49130 -- macros y constantes -- MODIFICADO
#define LIMITE_49130 49330
#define FACTOR_49130 2

int aplicar_limite49130(int valor) {
    if (valor > LIMITE_49130) return LIMITE_49130;
    return valor * FACTOR_49130;
}
