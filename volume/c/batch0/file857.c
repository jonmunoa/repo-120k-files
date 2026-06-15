// fichero 857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro857;

Registro857 crear_registro857(int id) {
    Registro857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
