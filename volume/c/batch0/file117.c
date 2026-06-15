// fichero 117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro117;

Registro117 crear_registro117(int id) {
    Registro117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
