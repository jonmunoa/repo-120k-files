// fichero 40922 -- macros y constantes -- MODIFICADO
#define LIMITE_40922 41122
#define FACTOR_40922 4

int aplicar_limite40922(int valor) {
    if (valor > LIMITE_40922) return LIMITE_40922;
    return valor * FACTOR_40922;
}
