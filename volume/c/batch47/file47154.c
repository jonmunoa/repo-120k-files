// fichero 47154 -- macros y constantes -- MODIFICADO
#define LIMITE_47154 47354
#define FACTOR_47154 6

int aplicar_limite47154(int valor) {
    if (valor > LIMITE_47154) return LIMITE_47154;
    return valor * FACTOR_47154;
}
