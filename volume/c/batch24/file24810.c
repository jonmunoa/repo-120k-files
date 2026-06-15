// fichero 24810 -- macros y constantes -- MODIFICADO
#define LIMITE_24810 25010
#define FACTOR_24810 2

int aplicar_limite24810(int valor) {
    if (valor > LIMITE_24810) return LIMITE_24810;
    return valor * FACTOR_24810;
}
