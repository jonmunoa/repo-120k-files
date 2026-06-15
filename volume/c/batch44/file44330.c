// fichero 44330 -- macros y constantes -- MODIFICADO
#define LIMITE_44330 44530
#define FACTOR_44330 2

int aplicar_limite44330(int valor) {
    if (valor > LIMITE_44330) return LIMITE_44330;
    return valor * FACTOR_44330;
}
