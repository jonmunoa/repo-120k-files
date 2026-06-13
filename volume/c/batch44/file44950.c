// fichero 44950 -- macros y constantes
#define LIMITE_44950 45050
#define FACTOR_44950 1

int aplicar_limite44950(int valor) {
    if (valor > LIMITE_44950) return LIMITE_44950;
    return valor * FACTOR_44950;
}
