// fichero 16950 -- macros y constantes -- MODIFICADO
#define LIMITE_16950 17150
#define FACTOR_16950 2

int aplicar_limite16950(int valor) {
    if (valor > LIMITE_16950) return LIMITE_16950;
    return valor * FACTOR_16950;
}
