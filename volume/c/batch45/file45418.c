// fichero 45418 -- macros y constantes
#define LIMITE_45418 45518
#define FACTOR_45418 4

int aplicar_limite45418(int valor) {
    if (valor > LIMITE_45418) return LIMITE_45418;
    return valor * FACTOR_45418;
}
