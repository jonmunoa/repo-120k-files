// fichero 6685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6685;

Registro6685 crear_registro6685(int id) {
    Registro6685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6685(Registro6685 r) {
    return r.valor + r.id;
}
