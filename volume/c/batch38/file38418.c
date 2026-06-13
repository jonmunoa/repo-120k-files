// fichero 38418 -- macros y constantes
#define LIMITE_38418 38518
#define FACTOR_38418 4

int aplicar_limite38418(int valor) {
    if (valor > LIMITE_38418) return LIMITE_38418;
    return valor * FACTOR_38418;
}
