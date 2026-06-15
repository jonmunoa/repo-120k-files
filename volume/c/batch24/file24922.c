// fichero 24922 -- macros y constantes -- MODIFICADO
#define LIMITE_24922 25122
#define FACTOR_24922 4

int aplicar_limite24922(int valor) {
    if (valor > LIMITE_24922) return LIMITE_24922;
    return valor * FACTOR_24922;
}
