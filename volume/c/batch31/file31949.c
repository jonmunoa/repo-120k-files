// fichero 31949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31949;

Registro31949 crear_registro31949(int id) {
    Registro31949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31949(Registro31949 r) {
    return r.valor + r.id;
}
