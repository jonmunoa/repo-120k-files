// fichero 29278 -- macros y constantes -- MODIFICADO
#define LIMITE_29278 29478
#define FACTOR_29278 5

int aplicar_limite29278(int valor) {
    if (valor > LIMITE_29278) return LIMITE_29278;
    return valor * FACTOR_29278;
}
