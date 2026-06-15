// fichero 48022 -- macros y constantes -- MODIFICADO
#define LIMITE_48022 48222
#define FACTOR_48022 4

int aplicar_limite48022(int valor) {
    if (valor > LIMITE_48022) return LIMITE_48022;
    return valor * FACTOR_48022;
}
