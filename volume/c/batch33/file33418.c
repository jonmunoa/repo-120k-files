// fichero 33418 -- macros y constantes -- MODIFICADO
#define LIMITE_33418 33618
#define FACTOR_33418 5

int aplicar_limite33418(int valor) {
    if (valor > LIMITE_33418) return LIMITE_33418;
    return valor * FACTOR_33418;
}
