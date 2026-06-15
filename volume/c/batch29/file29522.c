// fichero 29522 -- macros y constantes -- MODIFICADO
#define LIMITE_29522 29722
#define FACTOR_29522 4

int aplicar_limite29522(int valor) {
    if (valor > LIMITE_29522) return LIMITE_29522;
    return valor * FACTOR_29522;
}
