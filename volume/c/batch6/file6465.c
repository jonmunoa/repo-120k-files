// fichero 6465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6465;

Registro6465 crear_registro6465(int id) {
    Registro6465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
