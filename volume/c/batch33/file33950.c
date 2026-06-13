// fichero 33950 -- macros y constantes
#define LIMITE_33950 34050
#define FACTOR_33950 1

int aplicar_limite33950(int valor) {
    if (valor > LIMITE_33950) return LIMITE_33950;
    return valor * FACTOR_33950;
}
