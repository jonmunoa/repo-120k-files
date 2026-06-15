// fichero 12541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12541;

Registro12541 crear_registro12541(int id) {
    Registro12541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
