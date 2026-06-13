// fichero 28949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28949;

Registro28949 crear_registro28949(int id) {
    Registro28949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28949(Registro28949 r) {
    return r.valor + r.id;
}
