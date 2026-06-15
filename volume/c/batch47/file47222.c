// fichero 47222 -- macros y constantes -- MODIFICADO
#define LIMITE_47222 47422
#define FACTOR_47222 4

int aplicar_limite47222(int valor) {
    if (valor > LIMITE_47222) return LIMITE_47222;
    return valor * FACTOR_47222;
}
