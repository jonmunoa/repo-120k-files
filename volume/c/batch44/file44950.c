// fichero 44950 -- macros y constantes -- MODIFICADO
#define LIMITE_44950 45150
#define FACTOR_44950 2

int aplicar_limite44950(int valor) {
    if (valor > LIMITE_44950) return LIMITE_44950;
    return valor * FACTOR_44950;
}
