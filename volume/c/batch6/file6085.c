// fichero 6085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6085;

Registro6085 crear_registro6085(int id) {
    Registro6085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
