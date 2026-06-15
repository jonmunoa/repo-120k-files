// fichero 41218 -- macros y constantes -- MODIFICADO
#define LIMITE_41218 41418
#define FACTOR_41218 5

int aplicar_limite41218(int valor) {
    if (valor > LIMITE_41218) return LIMITE_41218;
    return valor * FACTOR_41218;
}
