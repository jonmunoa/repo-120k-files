// fichero 17829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17829;

Registro17829 crear_registro17829(int id) {
    Registro17829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
