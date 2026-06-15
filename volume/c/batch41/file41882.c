// fichero 41882 -- macros y constantes -- MODIFICADO
#define LIMITE_41882 42082
#define FACTOR_41882 4

int aplicar_limite41882(int valor) {
    if (valor > LIMITE_41882) return LIMITE_41882;
    return valor * FACTOR_41882;
}
