// fichero 9922 -- macros y constantes -- MODIFICADO
#define LIMITE_9922 10122
#define FACTOR_9922 4

int aplicar_limite9922(int valor) {
    if (valor > LIMITE_9922) return LIMITE_9922;
    return valor * FACTOR_9922;
}
