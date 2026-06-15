// fichero 21353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21353;

Registro21353 crear_registro21353(int id) {
    Registro21353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
