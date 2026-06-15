// fichero 16418 -- macros y constantes -- MODIFICADO
#define LIMITE_16418 16618
#define FACTOR_16418 5

int aplicar_limite16418(int valor) {
    if (valor > LIMITE_16418) return LIMITE_16418;
    return valor * FACTOR_16418;
}
