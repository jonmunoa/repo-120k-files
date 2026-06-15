// fichero 21445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21445;

Registro21445 crear_registro21445(int id) {
    Registro21445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
