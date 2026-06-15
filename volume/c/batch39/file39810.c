// fichero 39810 -- macros y constantes -- MODIFICADO
#define LIMITE_39810 40010
#define FACTOR_39810 2

int aplicar_limite39810(int valor) {
    if (valor > LIMITE_39810) return LIMITE_39810;
    return valor * FACTOR_39810;
}
