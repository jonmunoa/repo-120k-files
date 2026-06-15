// fichero 25214 -- macros y constantes -- MODIFICADO
#define LIMITE_25214 25414
#define FACTOR_25214 6

int aplicar_limite25214(int valor) {
    if (valor > LIMITE_25214) return LIMITE_25214;
    return valor * FACTOR_25214;
}
