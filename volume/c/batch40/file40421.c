// fichero 40421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40421;

Registro40421 crear_registro40421(int id) {
    Registro40421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
