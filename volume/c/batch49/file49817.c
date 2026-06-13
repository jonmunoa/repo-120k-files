// fichero 49817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49817;

Registro49817 crear_registro49817(int id) {
    Registro49817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49817(Registro49817 r) {
    return r.valor + r.id;
}
