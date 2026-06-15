// fichero 41442 -- macros y constantes -- MODIFICADO
#define LIMITE_41442 41642
#define FACTOR_41442 4

int aplicar_limite41442(int valor) {
    if (valor > LIMITE_41442) return LIMITE_41442;
    return valor * FACTOR_41442;
}
