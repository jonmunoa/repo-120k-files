// fichero 49753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49753;

Registro49753 crear_registro49753(int id) {
    Registro49753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49753(Registro49753 r) {
    return r.valor + r.id;
}
