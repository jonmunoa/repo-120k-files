// fichero 25950 -- macros y constantes -- MODIFICADO
#define LIMITE_25950 26150
#define FACTOR_25950 2

int aplicar_limite25950(int valor) {
    if (valor > LIMITE_25950) return LIMITE_25950;
    return valor * FACTOR_25950;
}
