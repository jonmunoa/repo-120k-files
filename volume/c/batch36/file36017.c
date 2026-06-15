// fichero 36017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36017;

Registro36017 crear_registro36017(int id) {
    Registro36017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
