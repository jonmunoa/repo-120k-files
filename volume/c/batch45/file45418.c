// fichero 45418 -- macros y constantes -- MODIFICADO
#define LIMITE_45418 45618
#define FACTOR_45418 5

int aplicar_limite45418(int valor) {
    if (valor > LIMITE_45418) return LIMITE_45418;
    return valor * FACTOR_45418;
}
