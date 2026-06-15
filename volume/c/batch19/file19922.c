// fichero 19922 -- macros y constantes -- MODIFICADO
#define LIMITE_19922 20122
#define FACTOR_19922 4

int aplicar_limite19922(int valor) {
    if (valor > LIMITE_19922) return LIMITE_19922;
    return valor * FACTOR_19922;
}
