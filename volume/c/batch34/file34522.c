// fichero 34522 -- macros y constantes -- MODIFICADO
#define LIMITE_34522 34722
#define FACTOR_34522 4

int aplicar_limite34522(int valor) {
    if (valor > LIMITE_34522) return LIMITE_34522;
    return valor * FACTOR_34522;
}
