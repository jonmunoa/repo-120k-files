// fichero 47810 -- macros y constantes -- MODIFICADO
#define LIMITE_47810 48010
#define FACTOR_47810 2

int aplicar_limite47810(int valor) {
    if (valor > LIMITE_47810) return LIMITE_47810;
    return valor * FACTOR_47810;
}
