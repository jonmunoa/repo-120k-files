// fichero 6569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6569;

Registro6569 crear_registro6569(int id) {
    Registro6569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
