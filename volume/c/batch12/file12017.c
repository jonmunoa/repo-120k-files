// fichero 12017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12017;

Registro12017 crear_registro12017(int id) {
    Registro12017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
