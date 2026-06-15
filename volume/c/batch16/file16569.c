// fichero 16569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16569;

Registro16569 crear_registro16569(int id) {
    Registro16569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
