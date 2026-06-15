// fichero 22442 -- macros y constantes -- MODIFICADO
#define LIMITE_22442 22642
#define FACTOR_22442 4

int aplicar_limite22442(int valor) {
    if (valor > LIMITE_22442) return LIMITE_22442;
    return valor * FACTOR_22442;
}
