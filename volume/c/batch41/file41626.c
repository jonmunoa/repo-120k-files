// fichero 41626 -- macros y constantes
#define LIMITE_41626 41726
#define FACTOR_41626 2

int aplicar_limite41626(int valor) {
    if (valor > LIMITE_41626) return LIMITE_41626;
    return valor * FACTOR_41626;
}
