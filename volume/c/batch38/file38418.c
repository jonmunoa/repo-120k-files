// fichero 38418 -- macros y constantes -- MODIFICADO
#define LIMITE_38418 38618
#define FACTOR_38418 5

int aplicar_limite38418(int valor) {
    if (valor > LIMITE_38418) return LIMITE_38418;
    return valor * FACTOR_38418;
}
