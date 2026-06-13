// fichero 41761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41761;

Registro41761 crear_registro41761(int id) {
    Registro41761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41761(Registro41761 r) {
    return r.valor + r.id;
}
