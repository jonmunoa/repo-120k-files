// fichero 27646 -- macros y constantes -- MODIFICADO
#define LIMITE_27646 27846
#define FACTOR_27646 3

int aplicar_limite27646(int valor) {
    if (valor > LIMITE_27646) return LIMITE_27646;
    return valor * FACTOR_27646;
}
