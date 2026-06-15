// fichero 24286 -- macros y constantes -- MODIFICADO
#define LIMITE_24286 24486
#define FACTOR_24286 3

int aplicar_limite24286(int valor) {
    if (valor > LIMITE_24286) return LIMITE_24286;
    return valor * FACTOR_24286;
}
