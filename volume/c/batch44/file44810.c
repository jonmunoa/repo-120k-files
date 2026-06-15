// fichero 44810 -- macros y constantes -- MODIFICADO
#define LIMITE_44810 45010
#define FACTOR_44810 2

int aplicar_limite44810(int valor) {
    if (valor > LIMITE_44810) return LIMITE_44810;
    return valor * FACTOR_44810;
}
