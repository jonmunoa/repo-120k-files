// fichero 40729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40729;

Registro40729 crear_registro40729(int id) {
    Registro40729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
