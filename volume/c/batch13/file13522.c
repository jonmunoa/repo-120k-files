// fichero 13522 -- macros y constantes -- MODIFICADO
#define LIMITE_13522 13722
#define FACTOR_13522 4

int aplicar_limite13522(int valor) {
    if (valor > LIMITE_13522) return LIMITE_13522;
    return valor * FACTOR_13522;
}
