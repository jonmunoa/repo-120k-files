// fichero 11465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11465;

Registro11465 crear_registro11465(int id) {
    Registro11465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
