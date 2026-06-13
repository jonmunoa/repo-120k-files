// fichero 41001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41001;

Registro41001 crear_registro41001(int id) {
    Registro41001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41001(Registro41001 r) {
    return r.valor + r.id;
}
