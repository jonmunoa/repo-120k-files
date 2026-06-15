// fichero 27922 -- macros y constantes -- MODIFICADO
#define LIMITE_27922 28122
#define FACTOR_27922 4

int aplicar_limite27922(int valor) {
    if (valor > LIMITE_27922) return LIMITE_27922;
    return valor * FACTOR_27922;
}
