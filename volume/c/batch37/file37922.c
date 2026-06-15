// fichero 37922 -- macros y constantes -- MODIFICADO
#define LIMITE_37922 38122
#define FACTOR_37922 4

int aplicar_limite37922(int valor) {
    if (valor > LIMITE_37922) return LIMITE_37922;
    return valor * FACTOR_37922;
}
