// fichero 21810 -- macros y constantes -- MODIFICADO
#define LIMITE_21810 22010
#define FACTOR_21810 2

int aplicar_limite21810(int valor) {
    if (valor > LIMITE_21810) return LIMITE_21810;
    return valor * FACTOR_21810;
}
