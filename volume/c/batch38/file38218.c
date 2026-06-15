// fichero 38218 -- macros y constantes -- MODIFICADO
#define LIMITE_38218 38418
#define FACTOR_38218 5

int aplicar_limite38218(int valor) {
    if (valor > LIMITE_38218) return LIMITE_38218;
    return valor * FACTOR_38218;
}
