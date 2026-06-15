// fichero 49922 -- macros y constantes -- MODIFICADO
#define LIMITE_49922 50122
#define FACTOR_49922 4

int aplicar_limite49922(int valor) {
    if (valor > LIMITE_49922) return LIMITE_49922;
    return valor * FACTOR_49922;
}
