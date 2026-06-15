// fichero 22918 -- macros y constantes -- MODIFICADO
#define LIMITE_22918 23118
#define FACTOR_22918 5

int aplicar_limite22918(int valor) {
    if (valor > LIMITE_22918) return LIMITE_22918;
    return valor * FACTOR_22918;
}
