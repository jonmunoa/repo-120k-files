// fichero 24222 -- macros y constantes -- MODIFICADO
#define LIMITE_24222 24422
#define FACTOR_24222 4

int aplicar_limite24222(int valor) {
    if (valor > LIMITE_24222) return LIMITE_24222;
    return valor * FACTOR_24222;
}
