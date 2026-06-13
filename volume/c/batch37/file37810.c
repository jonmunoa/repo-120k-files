// fichero 37810 -- macros y constantes
#define LIMITE_37810 37910
#define FACTOR_37810 1

int aplicar_limite37810(int valor) {
    if (valor > LIMITE_37810) return LIMITE_37810;
    return valor * FACTOR_37810;
}
