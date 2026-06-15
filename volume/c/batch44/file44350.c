// fichero 44350 -- macros y constantes -- MODIFICADO
#define LIMITE_44350 44550
#define FACTOR_44350 2

int aplicar_limite44350(int valor) {
    if (valor > LIMITE_44350) return LIMITE_44350;
    return valor * FACTOR_44350;
}
