// fichero 9833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9833;

Registro9833 crear_registro9833(int id) {
    Registro9833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
