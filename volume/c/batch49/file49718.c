// fichero 49718 -- macros y constantes
#define LIMITE_49718 49818
#define FACTOR_49718 4

int aplicar_limite49718(int valor) {
    if (valor > LIMITE_49718) return LIMITE_49718;
    return valor * FACTOR_49718;
}
