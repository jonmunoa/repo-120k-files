// fichero 34233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34233;

Registro34233 crear_registro34233(int id) {
    Registro34233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
