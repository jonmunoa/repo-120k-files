// fichero 48569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48569;

Registro48569 crear_registro48569(int id) {
    Registro48569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
