// fichero 40549 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40549;

Registro40549 crear_registro40549(int id) {
    Registro40549 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
