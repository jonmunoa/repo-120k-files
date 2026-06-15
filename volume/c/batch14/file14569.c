// fichero 14569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14569;

Registro14569 crear_registro14569(int id) {
    Registro14569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
