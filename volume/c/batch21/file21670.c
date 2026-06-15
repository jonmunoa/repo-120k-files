// fichero 21670 -- macros y constantes -- MODIFICADO
#define LIMITE_21670 21870
#define FACTOR_21670 2

int aplicar_limite21670(int valor) {
    if (valor > LIMITE_21670) return LIMITE_21670;
    return valor * FACTOR_21670;
}
