// fichero 14621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14621;

Registro14621 crear_registro14621(int id) {
    Registro14621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
