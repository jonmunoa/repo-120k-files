// fichero 41218 -- macros y constantes
#define LIMITE_41218 41318
#define FACTOR_41218 4

int aplicar_limite41218(int valor) {
    if (valor > LIMITE_41218) return LIMITE_41218;
    return valor * FACTOR_41218;
}
