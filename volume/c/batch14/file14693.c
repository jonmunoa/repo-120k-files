// fichero 14693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14693;

Registro14693 crear_registro14693(int id) {
    Registro14693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
