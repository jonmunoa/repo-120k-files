// fichero 20418 -- macros y constantes -- MODIFICADO
#define LIMITE_20418 20618
#define FACTOR_20418 5

int aplicar_limite20418(int valor) {
    if (valor > LIMITE_20418) return LIMITE_20418;
    return valor * FACTOR_20418;
}
